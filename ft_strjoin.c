/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:59:08 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/22 13:23:51 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	len2 = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1)
		len1 = ft_strlen(s1);
	if (s2)
		len2 = ft_strlen(s2);
	cat = (char *)ft_calloc((len1 + len2 + 1), 1);
	if (!cat)
		return (NULL);
	if (s1 && s2)
	{
		ft_strlcpy(cat, s1, len1 + len2 + 1);
		ft_strlcat(cat, s2, len1 + len2 + 1);
	}
	return (cat);
}

/* Devuelve una cadena de carácteres, uniendo dos cadenas de carácteres
pasadas como parámetros, las guardamos en cat. Si existen, medimos
su longitud y reservamos la memoria. Comprobamos en caso de que no
exista. Si ambos existen, hacemos un cpy de la 1a cadena y luego un
cat de la 2a sobre la primera, devolvemos nuestro char cat.*/

/*int	main(void)
{
	printf("%s", ft_strjoin("avanza", "rapido"));
	return (0);
}*/
