/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:42:02 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/18 17:03:40 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*Se detecta si un entero es minúscula y se resta -32
para convertirla en mayúscula, sino se devuelve igual*/

/*int	main(void)
{
	unsigned char c;

	c = 'h';
	printf("%c", ft_toupper(c));
	return (0);
}*/
