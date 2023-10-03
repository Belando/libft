/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:39:17 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/21 13:39:26 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dup;

	i = ft_strlen(s) + 1;
	dup = (char *)malloc(i);
	if (dup != NULL)
		ft_strlcpy(dup, s, i);
	return (dup);
}

/* Con una cadena de carácteres s, a duplica en un nuevo puntero.
Ussamos strlen+1 para saber el tamaño y reservar el final de cadena.
Reservamos la memoria para el duplicado con malloc, si no es nulo,
hacemos un copy y devolvemos.*/

/*int	main(void)
{
	printf("%s", ft_strdup("eeeo"));
	return (0);
}*/
