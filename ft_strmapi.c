/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelando <fbelando@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:48:33 by fbelando          #+#    #+#             */
/*   Updated: 2023/09/25 18:52:52 by fbelando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}

/*static char	lower_upper(unsigned int i, char c)
{
	static int	index[11] = {0};

	index[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int	main(void)
{
	char	s[] = "MaPi Me Da PrObLeMas";

	printf("%s", ft_strmapi(s, &lower_upper));
	return (0);
}*/
/* Se usa para aplicar una función f a cada carácter
de una cadena de carácteres s, creando una nueva.
creamos *str donde almacenamos la nueva cadena*/
