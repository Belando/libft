/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:13:52 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/26 14:14:05 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int	main ()
{
	int a = 10;
	int b = a;
	int c = a;
	t_list *amparo = ft_lstnew("valencia apesta");
	t_list *fran = ft_lstnew("murcia existe");
	printf("amparo: %p  fran: %p\n", amparo, fran);
	ft_lstadd_front(&amparo, fran);
	printf("amparo: %p  fran: %p\n", amparo, fran);
	while(amparo)
	{
		printf("%s\n", amparo->content);
		amparo = amparo->next;
	}
	printf("amparo: %p  fran: %p\n", amparo, fran);
	printf("%d/n", ft_lstsize(amparo));
}*/
