/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 17:51:36 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/19 18:10:27 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*u1;
	unsigned char	*u2;
	size_t			i;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (u1[i] != u2[i])
			return ((int)u1[i] - (int)u2[i]);
		i++;
	}
	return (0);
}

/* Se utiliza para comparar dos bloques de memoria hasta un 
numero max de bytes n. Valor positivo si s1 > s2. Sino 0.*/

/*int	main(void)
{
	const void *s1 = "Hola";
	const void *s2 = "hola";

	printf("%d", ft_memcmp(s1, s2, 4));
	return (0);
}*/
