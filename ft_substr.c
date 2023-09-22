/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:56:08 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/21 14:27:02 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (start >= (unsigned int)(ft_strlen(s)))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)ft_calloc((len + 1), 1);
	if (sub == NULL || s == NULL)
		return (NULL);
	ft_memset(sub, 0, len + 1);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}

/*int	main(void)
{
	char s[] = "yeepa";

	printf("%s", ft_substr(s, 3, 20));
	return (0);
}*/
