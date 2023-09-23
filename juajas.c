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

/*static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0') //Mientras que nuestro string no llegue a nulo
	{
		free(str[i]); //liberamos esa posicion e iteramos
		i++;
	}
	free (str); //luego liberamos el string entero
}

static size_t	ft_count(const char *s, char c)
{
	size_t	count; //subcadenas encontradas
	size_t	i; //iterar a través de la subcadena

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c) //que no sea igual al caracter delimitador c -> estamos en una subcadena
		{
			count++; //se incrementa al encontrar una nueva subcadena
			while (s[i] && s[i] != c) //avanzamos la subcadena hasta el final de cadena (delimitador c)
				i++;
		}
		else //que si es igual a c, avanzamos
			i++;
	}
	return (count); //numero total de subcadenas encontradas
}

static char	*ft_extract(const char *s, size_t start, size_t end)
{
	char	*substring;
	size_t	j;

	j = 0;
	substring = (char *)malloc((end - start + 1) * sizeof(char)); //puntero para almacenar la subcadena extraída, tamaño
	if (substring == NULL) //verificamos la asignación de memoria
		return (NULL);
	while (start < end) //siempre que la posición de inicio sea menor que el final, sólo se copian carácteres válidos dento de los límites
		substring[j++] = s[start++]; //se copia carácter por carácter de la cadena original a la subcadena
	substring[j] = '\0';
	return (substring); //devuelve el puntero a la subcadena
}

char **ft_split(char const *s, char c)
{
	size_t	count;
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0; //para recorrer la cadena original "s"
	j = 0; //para recorrer el array de punteros "result"
	start = 0; //Indicia el inicio de una subcadena
	count = ft_count(s, c); //cuenta el numero de subcadenas 
	result = (char **)malloc((count + 1) * sizeof(char *)); //reserva de memoria para el array de punteros a las subcadenas

	if (result == NULL) //verificamos que la memoria se ha asignado
		return (NULL);
	while (s[i]) 
	{
		if (s[i] != c) //que no es el carácter delimitador c
		{
			start = i; //guardamos la posicion de inicio de la subcadena
			while (s[i] && s[i] != c)
				i++; // avanzamos hasta el siguiente delimitador o fin de cadena
			result[j] = ft_extract(s, start, i); //extraemos la subcadena
			if (result[j] == NULL) //verifica si se ha asignado la memoria
			{
				ft_free(result); //si no se ha asignado se libera (reservamos +1)
				return (NULL);
			}
			j++; //avanza al siguiente elemento del array result
		}
		else
			i++; //si el carácter actual es el delimitador c, avanza a la siguiente
		result[j] = NULL; //damos null al ultimo elemento //devuelve array de punteros a las subcadenas
	}
	return (result);
}

/*int main(void)
{
    char    str[] = "hola como estas tu";
    char    **word_split;
    char    c = 'i';
    word_split = ft_split(str, c);
    printf("%s\n", word_split[0]);
    printf("%s\n", word_split[1]);
    printf("%s\n", word_split[2]);
    printf("%s\n", word_split[3]);
    return (0);
}*/
/*void a()
{
	system("leaks a.out");
}

int main()
{
	atexit(a);
}*/