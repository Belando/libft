/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:54:57 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/12 17:53:30 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 40 && c <= 176)
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	c;

	c = 40;
	printf("%d\n", ft_isprint(c));
	return (0);
}
