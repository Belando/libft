/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:23:42 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:05:41 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/* Para llenar un bloque de memoria str, con un entero c 
y una longitud len. Mientras que i sea menor que len en el puntero de str 
en la posición i igualamos al entero c*/

/*int	main(void)
{
	char	str[] = "hola hola";

	ft_memset(&str, 'p', 3);
	printf("%s\n", str);
	return (0);
}*/
