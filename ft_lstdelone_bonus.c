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

/*void	del(void *s)
{
	free(s);
}

void a()
{
	system("leaks a.out");
}
int	main(void)
{
	atexit(a);
	int		i;
	t_list	*list;

	i = 0;
	list = ft_lstnew(ft_strdup("creo que es asi"));
	printf("%s\n", list->content);
	ft_lstdelone(list, del);
	while (i < 15)
	{
		printf("%d", ((char *)list->content)[i]);
		i++;
	}
	return (0);
}*/

/* Se utiliza para eliminar un elemento de nuestra lista y liberar la memoria.
El puntero del es una función que se utilizará para liberar memoria del
contenido de la lista. se llama a del lst->content para liberar el contenido
asociada al contenido de la lista. Luego free para liberar la memoria.
La memoria de next no debe liberarse.*/