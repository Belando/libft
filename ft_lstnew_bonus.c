/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:34:21 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 13:34:25 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;

	element = (t_list *)malloc(sizeof(t_list));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return (element);
}

/* Crea un nuevo elemento para una lista enlazada. Si tiene éxito al
asignar memoria, asigna el contenido al nuevo campo content de la lista.
Asigna al siguiente elemento de la lista el elemento null para asegurar
de que el nuevo es el último elemento de la lista.*/

/*int	main(void)
{
	t_list	*new_element;

	new_element = ft_lstnew_bonus("Hello, World!");
	printf("New element: %s\n", (char *)new_element->content);
	free(new_element);
	return (0);
}*/
