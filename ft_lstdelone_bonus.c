/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:25:07 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 16:25:12 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
	{
		del (lst->content);
		free (lst);
	}
}

/*int	main(void)
{
	t_list	*lst = ft_lstnew("Inicial");
	t_list	*element2 = ft_lstnew("Mitad");
	t_list	*element3 = ft_lstnew("Último");

	lst->next = element2;
	element2->next = element3;
	t_list *temp = lst;
	printf("Before delete:\n");
	while (temp)
	{
		printf("%s\n", (char *)(temp->content));
		temp = temp->next;
	}
	lst = element2;
	printf("After delete: %p\n", (void *)lst);
	return (0);
}*/

/* Se utiliza para eliminar un elemento de nuestra lista y liberar la memoria.
El puntero del es una función que se utilizará para liberar memoria del
contenido de la lista. se llama a del lst->content para liberar el contenido
asociada al contenido de la lista. Luego free para liberar la memoria.*/