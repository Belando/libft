/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:06:11 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/19 17:51:02 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	size_t			i;

	t = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (t[i] == (unsigned char)c)
			return (&t[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const void	*str = "Hola";
	char		target = 'o';

	printf("%c", *((char *)ft_memchr(str, target, 4)));
	return (0);
}*/
