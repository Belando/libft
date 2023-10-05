/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:26:21 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 16:26:24 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst)
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
		*lst = NULL;
	}
}

/* Elimina el contenido de todos los elementos de una lista 
y libera la memoria */

/*static void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst = ft_lstnew("Inicial");
	t_list	*element2 = ft_lstnew("Mitad");
	t_list	*element3 = ft_lstnew("Último");

	lst->next = element2;
	element2->next = element3;
	t_list *temp = lst;
	while (temp)
	{
		printf("%s\n", (char *)(temp->content));
		temp = temp->next;
	}
	ft_lstclear(&lst, del_content);
	if (!lst)
		printf("La lista y la memoria se han liberado correctamente.\n");
	else
		printf("Error: La lista aún contiene elementos.\n");
	return (0);
}*/
