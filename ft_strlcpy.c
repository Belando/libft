/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:50:49 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/16 17:20:01 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

/*Se utiliza para copiar una cadena de caracteres en otra ccon un limite max
de caracteres evitando desbordamientos de bufer, copia hasta el caracter
nulo o hasta el penúltimo caracter dstsize para colocar nulo al final*/

/* int	main(void)
{
	char	dst[0] = "";
	char	src[] = "hola";

	printf("%zu\n", ft_strlcpy(dst, src, 0));
	printf("%s", dst);
	return (0);
} */
