/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:05:12 by fbelando            #+#    #+#             */
/*   Updated: 2023/09/20 17:05:12 by fbelando           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t	i;
	char	*dup;
	
	i = ft_strlen(s) + 1;
	dup = (char *)malloc(i);
	if (dup != NULL)
		ft_strlcpy(dup, s, i);
	return (dup);
}