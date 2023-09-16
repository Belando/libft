/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:34:52 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/16 18:59:11 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	d = ft_strlen(dst);
	s = 0;
	if (dstsize == 0 && (!dst || !src))
		return (0);
	if ((ft_strlen(dst) + ft_strlen(src)) > (int)dstsize)
		return (0);
	while (src[s] != '\0' && d < dstsize)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = '\0';
	return (d);
}

// int	main(void)
// {
// 	char	src[50] = "si";
// 	char	dst[14] = "noooo";
// 	size_t a = ft_strlcat(dst, src, 12);
// 	printf("ret: %zu, src: %s, dst: %s\n", a, src, dst);

// 	char	src2[50] = "si";
// 	char	dst2[14] = "noooo";
// 	size_t a2 = strlcat(dst2, src2, 12);
// 	printf("ret: %zu, src: %s, dst: %s", a2, src2, dst2);
// }