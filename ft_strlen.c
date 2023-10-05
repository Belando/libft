/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:59:54 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/12 18:32:19 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

/* Mide la longitud de una cadena de carácteres hasta que llega a valor nulo*/

/*int	main(void)
{
	char	*str;

	str = "open mid";
	printf("%lu\n", ft_strlen(str));
	return (0);
}*/		
