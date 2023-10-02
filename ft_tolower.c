/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:03:50 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/18 17:07:45 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*Se detecta si un entero es mayúscula y se suma 32
para convertirla en minúscula, sino se devuelve igual*/

/*int	main(void)
{
	unsigned char	c;

	c = 'H';
	printf("%c", ft_tolower(c));
	return (0);
}*/
