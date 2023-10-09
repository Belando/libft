/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:55:07 by fbelando          #+#    #+#             */
/*   Updated: 2023/10/09 16:15:29 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				negative;
	unsigned long	n;

	i = 0;
	negative = 1;
	n = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		if (n > (unsigned long)LONG_MAX && negative == -1)
			return (0);
		if (n > (unsigned long)LONG_MAX && negative == 1)
			return (-1);
		i++;
	}
	return (negative * n);
}

/* Convierte una cadena de caracteres en un entero, evitamos del tab 
hasta el retorno de carro y los espacios iterando, si encontramos simbolos
y es negativo lo cambiamos y si son numeros, hacemos la conversion 
Se multiplica n por 10 para desplazar los digitos y se le resta
el valor ascii de 0. Si el valor es negativo/positivo nos devuelve 0 o -1 
para indicar error,, ya que es mayor que el mayor int. */

int	main(void)
{
	char	*ptr = "123422222222222222567";

	printf("%d\n", ft_atoi(ptr));
	printf("%d\n", atoi (ptr));
	return (0);
}
