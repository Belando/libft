/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:04:59 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/18 19:05:27 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	while (n > 0)
	{
		c1 = (unsigned char)*s1;
		c2 = (unsigned char)*s2;
		if (c1 < c2)
			return (-1);
		else if (c1 > c2)
			return (1);
		else if (c1 == '\0' || n == 1)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*Se utiliza para comparar dos cadenas de caracteres de manera segura,
hasta un tamaño n determinado. Bucle n > 0, porque vamos reduciendo.
Se amacenan en c1 y c2, si es mayor 1, menor -1 igual 0.
Es el último retorno el que devuelve 0, si llega a final de cadena y
es n = 1, indica tambien que son iguales*/

/*int	main(int argc, char *argv[])
{
	char			*str1 = argv[1];
	char			*str2 = argv[2];
	unsigned int	n = atoi(argv[3]);
	int				result = ft_strncmp(str1, str2, n);

	if (result == 0)
		printf("Los carácteres comparados son iguales. \n");
	else if (result <0)
		printf("Los carácteres comparados de str1 son menores. \n");
	else
		printf("Los carácteres comparados de str1 son mayores. \n");
	return (0);
}*/
