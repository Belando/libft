/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:24:49 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/25 15:43:28 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	char			*result;
	unsigned int	num;

	len = ft_numlen(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	if (n < 0)
	{
		result[0] = '-';
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		result[0] = '0';
	result[len] = '\0';
	while (num != 0)
	{
		result[len - 1] = '0' + (num % 10);
		num = num / 10;
		len--;
	}
	return (result);
}
