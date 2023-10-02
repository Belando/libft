/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:02:24 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:03:07 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* Para llenar un bloque de memoria s, con 0
y una longitud n. Usamos memset con el valor 0 como el int c, el puntero s
para copiar los 0 y size n*/

/*int	main(void)
{
	char	str[9] = "hola hola";

	ft_bzero(&str, 9);
	printf("%s\n", str);
	return (0);
}*/
