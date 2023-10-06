/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:19:07 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/22 14:32:31 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	if (end < start)
		return (ft_strdup(""));
	return (ft_substr(s1, start, end - start));
}

/*Toma dos cadenas de caracteres, la principal y una set, considerada
como caracteres de espacio en blanco que deben ser eliminados al principio
y al final de la principal. Declaramos una variable para el principio.
Si la posicion start y la busqueda de caracter no es null aumenta start.
Mientras que end sea mayor que start y la busqueda de caracter desde atras
no sea null, decrementa el final. Finalmente nos devuelve el substring con
el tamaño resultante de la diferencia de final y principio*/

/*int	main(void)
{
	char const	*str = "aaaahaaaliggutthfytia";
	char const	*str2 = "ah";

	printf("%s", ft_strtrim(str, str2));
	return (0);
}*/