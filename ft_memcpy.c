/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:25 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/15 19:48:47 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (!s && !d)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/* Copiamos un bloque de memoria desde la posicion src hasta la posición dest
con un tamaño n determinado. Se declaran punteros para origen y destino, 
para asegurarse de que se copian byte a byte. */

/*int	main(void)
{
	char dst[20] = "catapum";
	char src[] = "adios";

	ft_memcpy(dst, src, 20);
	printf("%s\n", dst);
}*/
