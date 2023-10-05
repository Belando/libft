/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:50:56 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 14:51:01 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	last = lst;
	while (last)
	{
		if ((last->next) == NULL)
			return (last);
		last = last->next;
	}
	return (last);
}

/* Devuelve un puntero al último elemento de nuestra lista. *last,
se le asigna el valor de lst, que es el primer elemento. Iniciamos el bucle
mientras last no sea nulo. Verificamos si el campo next, de cada elemento,
es nulo. Si lo es, significa que es el último y lo devolvemos.*/

/*int	main(void)
{
	t_list	*lst = ft_lstnew("Inicial");
	t_list	*element2 = ft_lstnew("Mitad");
	t_list	*element3 = ft_lstnew("Último");

	lst->next = element2;
	element2->next = element3;
	t_list	*last = ft_lstlast(lst);
	printf("Last element: %s\n", (char *)(last->content));
	return (0);
}*/

/* Definimos una lista nueva y añadimos a cada elemento 
como next el siguiente. definimos un last al que le pasamos
nuestra función lstlast con la lst inicial.*/