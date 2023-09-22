/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:19:07 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/22 14:32:31 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != '\0')
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != '\0')
		end--;
	return (ft_substr(s1, start, end - start));
}

/*int	main(void)
{
	char const	*str = "holad";
	char const	*str2 = "hdios";

	printf("%s", ft_strtrim(str, str2));
	return (0);
}*/