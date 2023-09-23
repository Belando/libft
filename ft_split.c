/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:21:16 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/23 13:21:22 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	start;
	char	**result;

	count = 0;
	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result = (char **)realloc((result, count + 2) * sizeof(char *));
			result[count] = (char *)malloc((i - start + 1) * sizeof(char));
			while (start < i)
				result[count][j++] = s[start++];
			result[count++][j] = '\0';
			j = 0;
		}
	}
	result[count] = NULL;
	return (result);
}
