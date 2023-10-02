/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:26:01 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/18 18:42:39 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*t;
	size_t	i;

	t = (char *)s;
	i = ft_strlen(t);
	c = c % 256;
	if (c == '\0')
		return (t + i);
	while (i > 0)
	{
		i--;
		if (t[i] == c)
			return (&t[i]);
	}
	return (NULL);
}

/* Busca la utima coincidencia de un carácter c en una cadena de carácteres s,
si la encuentra devuelve un puntero a la posición, sino devuelve NULL
A diferencia de strchr, recorremos desde atrás hacia delante, por eso
necesitamos el strlen de s.*/

/*int	main(void)
{
	const char	*str = "Hola qué tal?";
	char		target = 'a';

	printf("%c", *ft_strchr(str, target));
	return (0);
}*/
