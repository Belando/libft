/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:45:20 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:00:07 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/* Detecta si un entero es un carácter ASCII imprimible o de control 
y devuelve un 1, sino un 0*/

/*int	main(void)
{
	int	c;

	c = 128;
	printf("%d\n", ft_isascii(c));
	return (0);
}*/
