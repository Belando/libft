/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:57 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:01:03 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/* Detecta si un entero es un caracter ASCII imprimible y devuelve un 1 
y sino un 0 */

/*int	main(void)
{
	int	c;

	c = 40;
	printf("%d\n", ft_isprint(c));
	return (0);
}*/
