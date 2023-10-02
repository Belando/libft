/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:04:23 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/14 14:59:41 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/* Detecta si un entero es un alfabético y devuelve un 1 
y sino un 0 */

/*int	main(void)
{
	int	c;

	c = 'A';
	printf("%d\n", ft_isalpha(c));
	return (0);
}*/
