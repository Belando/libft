/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:05:52 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/15 20:41:41 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (!s && !d)
		return (NULL);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/* Copiamos un bloque de memoria desde la posicion src hasta la
posición dest con un tamaño determinado. Si el desino es mayor 
que el origen, se empieza a copiar desde la posición de la derecha, 
para evitar que se superposición.
en caso contrario se copia desde la izquierda como memcpy */

/*int	main(void)
{
	char	dst[] = "adios";
	char	src[] = "hola";

	ft_memmove(&dst, &src, 5);
	printf("%s\n", dst);
	return (0);
}*/
