/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:27:22 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 16:27:25 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* Aplica a cada elemento(content) de la lista una función f*/

void	print_string(void *content)
{
	printf("blablabla %s\n", (char *)content);
}

int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("Primero");
	ft_lstadd_front(&lst, ft_lstnew("Segundo"));
	ft_lstadd_front(&lst, ft_lstnew("Tercero"));
	t_list *temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)(temp->content));
		temp = temp->next;
	}
	ft_lstiter(lst, print_string);
	return (0);
}
