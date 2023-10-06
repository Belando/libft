/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:56:08 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/21 14:27:02 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)(ft_strlen(s)))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)ft_calloc((len + 1), 1);
	if (sub == NULL)
		return (NULL);
	ft_memset(sub, 0, len + 1);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

// static char	*ft_extract(const char *s, size_t start, size_t end)
// {
// 	char	*substring;
// 	size_t	j;

// 	j = 0;
// 	substring = (char *)malloc((end - start + 1) * sizeof(char));
// 	if (substring == NULL)
// 		return (NULL);
// 	while (start < end)
// 		substring[j++] = s[start++];
// 	substring[j] = '\0';
// 	return (substring); 
// }

/* Debe extraer un substring de una cadena de caracteres, desde una posicion
 de inicio y una longitud dada. Primero verificamos si la posicion de 
 comienzo es mayor a la longitud del string. Después verifica si len
 es mayor a la longitud que necesitamos y la actualiza. Asignamos memoria.
 Inicializamos la memoria con memset, garantiza que los caracteres no
 utilizados sean 0. Copiamos desde start+i en sub y añadimos fin de cadena*/

/*int	main(void)
{
	char s[] = "yeepa";

	printf("%s", ft_substr(s, 3, 20));
	return (0);
}*/
