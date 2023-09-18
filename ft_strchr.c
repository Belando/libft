/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:10:31 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/18 17:44:27 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*t;
	size_t	i;

	t = (char *)s;
	i = 0;
	c = c % 256;
	while (t[i] != '\0' && t[i] != c)
		i++;
	if (t[i] == c)
		return (&t[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Hola qué tal?";
	char		target = '?';

	printf("%c", *ft_strchr(str, target));
	return (0);
}*/
