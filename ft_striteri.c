/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:46:01 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/22 16:04:49 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*static void	lower_upper(unsigned int i, char *c)
{
	static int	index[11] = {0};

	index[i] = 1;
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;
}

int	main(void)
{
	char	s[] = "StrierI GuApeTon";

	printf("Before: %s\n", s);
	ft_striteri(s, &lower_upper);
	printf("After: %s\n", s);
	return (0);
}*/

/* Aplica una función f a una cadena de carácteres s. La diferencia con mapi
es que esta la aplica en la cadena original.*/