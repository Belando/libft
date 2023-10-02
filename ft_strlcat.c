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

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;

	d = 0;
	s = 0;
	while (dst[d] && d < dstsize)
		d++;
	if (d < dstsize)
	{
		while (src[s] && d < dstsize - 1)
		{
			dst[d] = src[s];
			s++;
			d++;
		}
		dst[d] = '\0';
	}
	while (src[s])
	{
		s++;
		d++;
	}
	return (d);
}

/*Se utiliza para concatenar dos cadenas de caracteres,
con un limite de caracteres, evitando desbordamientos de bufer.
Mientras que la posicion de dst sea menor que dstsize, iteramos.
Si dst es 0 o d es igual a dstsize cuenta caracteres de s y devuelve
la longitud de dstlen + la de src(no hay espacio para concatenar)
SI entra, entra en un bucle mientras que src no sea nulo y d sea igual 
al penultimo caracter de dstsize, dejando espacio para el nulo
y devuelve dstlen + s*/

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