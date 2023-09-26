/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:39:21 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/26 15:42:14 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 1;
	if (!lst)
		return (0);
	while (lst->next != '\0')
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

// int main()
// {
// 	t_list *a = ft_lstnew("HELLO");
// 	t_list *b = ft_lstnew("JIJI");
// 	a->next = b;
// 	printf("%d\n", ft_lstsize(a));
// }