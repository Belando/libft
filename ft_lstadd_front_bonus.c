/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:25:13 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/05 14:25:16 by fbelando         ###   ########.fr       */
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

/* Añade un nuevo elemento al principio de nuestra lista, luego
actualiza el puntero a lst, para que apunte al nuevo elemento.*/

/*int	main(void)
{
	t_list	*amparo = ft_lstnew_bonus("valencia apesta");
	t_list	*fran = ft_lstnew_bonus("murcia existe");

	printf("amparo: %p  fran: %p\n", amparo, fran);
	ft_lstadd_front(&amparo, fran);
	printf("amparo: %p  fran: %p\n", amparo, fran);
	while (amparo)
	{
		printf("%s\n", amparo->content);
		amparo = amparo->next;
	}
	printf("amparo: %p  fran: %p\n", amparo, fran);
	printf("%d\n", ft_lstsize(amparo));
}*/
