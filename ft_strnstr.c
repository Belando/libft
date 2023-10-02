/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:44:42 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/19 18:54:46 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle [j + 1] == '\0')
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* Busca una subcadena de caracteres needle en la cadena haystack hasta
una longitud maxima len.Si no hay needle se devuelve haystack, el bucle
entra mientras */

/*int	main(void)
{
	char	*haystack = "YEEEEEEEApa";
	char	*needle = "Apa";

	printf("%c", *ft_strnstr(haystack, needle, 11));
	return (0);
}*/
