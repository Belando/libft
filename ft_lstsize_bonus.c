/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:42:13 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 14:42:18 by fbelando         ###   ########.fr       */
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

/*Calcula y devuelve el nº de elemeentos que contiene mi lista simple,
representada por el puntero lst. En cada iteración del bucle, se avanza al
siguiente elemento de la lista y se incrementa len. Hasta que llegue al
último elemento de la lista*/

/*int	main(void)
{
	t_list *a = ft_lstnew("HELLO");
	t_list *b = ft_lstnew("JIJI");

	a->next = b;
	printf("%d\n", ft_lstsize(a));
}*/
