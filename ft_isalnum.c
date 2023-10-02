/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:39:13 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 14:58:33 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* Detecta si un entero es alfanumérico, devuelve 1 si lo es y 0 sino.
*/

/*int	main(void)
{
	int	c;

	c = ';';
	printf("%d\n", ft_isalnum(c));
	return (0);
}*/
