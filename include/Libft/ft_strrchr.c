/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:34:46 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/28 01:17:50 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*start;

	start = s;
	while (*s != '\0')
		s ++;
	if ((char)c == '\0')
		return ((char *)s);
	while (s >= start)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
/*
int main(void)
{
    const char *s = "azinhairo";

    // Teste com caractere presente
    printf("Procurando 'A': %s\n", ft_strrchr(s, 'a'));
    
    // Teste com caractere ausente
    printf("Procurando 'x': %s\n", ft_strrchr(s, 'x'));
    
    // Teste com o caractere nulo '\0' (fim da string)
    printf("Procurando '\\0': %s\n", ft_strrchr(s, '\0'));
    return 0;
}
*/