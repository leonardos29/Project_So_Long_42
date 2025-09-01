/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 04:35:41 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/18 05:00:32 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		i;

	cpy = malloc(ft_strlen(s) + 1);
	if (!cpy)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		cpy[i] = s[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
int main(void)
{
	const char *original = "42 Lisboa";
	char *copia = ft_strdup(original);

	if (!copia)
	{
		printf("Erro ao duplicar string!\n");
		return (1);
	}

	printf("String original: %s\n", original);
	printf("String copiada:  %s\n", copia);

	free(copia);

	return 0;
}
*/