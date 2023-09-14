/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:24 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:03:07 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '0';
		i++;
	}
	if (n == 0)
		return ;
	return ;
}

/*int	main(void)
{
	char	str[9] = "hola hola";

	ft_bzero(&str, 9);
	printf("%s\n", str);
	return (0);
}*/
