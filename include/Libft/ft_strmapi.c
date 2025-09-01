/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 21:30:34 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 19:11:04 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
int, char))
{
	char				*new_s;
	unsigned int		i;

	if (!(s && f))
		return (NULL);
	new_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
/*
char to_upper_even(unsigned int i, char c)
{
    if ((i % 2 == 0) && (c >= 'a') && (c <= 'z'))
        return (c - 32); // transforma em maiúscula
    return c;
}

int main(void)
{
    char *res = ft_strmapi("hello", to_upper_even);
    printf("%s\n", res); // saída: "HeLlO"
    free(res);
    return 0;
}
*/