/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:36:32 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 15:00:26 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/* Detecta si un entero es un digito y devuelve un 1 
y sino un 0 */

/*int	main(void)
{
	int	c;

	c = '9';
	printf("%d\n", ft_isdigit(c));
	return (0);
}*/	
