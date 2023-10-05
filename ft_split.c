/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:21:16 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/23 13:21:22 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_data
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;
}		t_data;

/*Es un puntero a un puntero de caracteres. 
Se utilizará para almacenar las subcadenas 
resultantes después de dividir la cadena de entrada.*/

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		free(str[i]);
		i++;
	}
	free (str);
}

/* Libera la memoria para una matriz de caracteres. 
Libera en cada posición i y luego la cadena entera.*/

static size_t	ft_count(const char *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

/* Cuenta cuantas subcadenas se pueden obtener diviendo S, 
con el caracter delimitador C*/

char	**ft_split(char const *s, char c)
{
	t_data	vars;

	vars.i = 0;
	vars.j = 0;
	vars.start = 0;
	vars.result = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (vars.result == NULL)
		return (NULL);
	while (s[vars.i])
	{
		if (s[vars.i] != c)
		{
			vars.start = vars.i;
			while (s[vars.i] && s[vars.i] != c)
				vars.i++;
			vars.result[vars.j] = ft_substr(s, vars.start, vars.i - vars.start);
			if (vars.result[vars.j] == NULL)
				return (ft_free(vars.result), NULL);
			vars.j++;
		}
		else
			vars.i++;
	}
	vars.result[vars.j] = NULL;
	return (vars.result);
}

/*int	main(void)
{
	char	str[] = "El split me vuelve loco";

	char	c = ' ';
	printf("%s\n", ft_split(str, c)[0]);
	printf("%s\n", ft_split(str, c)[1]);
	printf("%s\n", ft_split(str, c)[2]);
	printf("%s\n", ft_split(str, c)[3]);
	printf("%s\n", ft_split(str, c)[4]);
	return (0);
}*/