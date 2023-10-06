/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:27:35 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 16:27:38 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

	new_lst = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/* Crea una nueva lista enlazada a partir
de elementos de la ya existente. Aplica f a cada elemento para
transformarlos y crear nuevos elementos en la lista.
Creamos lista nueva, nodo nuevo y content. 
Aplicamos al contenido la función f.
Si content es null significa que ha habido un error con la funcion f, 
limpiamos con lstclear y devolvemos null para indicar el error. 
en el nodo nuevo, creamos content con lstnew. 
Si la creación del nuevo nodo falla. 
usamos del para borrar el contenido y lstclear para liberar 
la memoria de la nueva lista y devolvemos null para indicar el error. 
Finalmente si no ha habido ningun error 
utilizamos lstadd_back para agregar el nuevo nodo al final
y actualizamos next de la lista original para que apunte al siguiente nodo.
Finalmente devolvemos la lista nueva.*/