/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 14:25:03 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/20 15:22:45 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	letter_in_list(char c, const char *list)
{
	while (*list != '\0')
	{
		if (c == *list)
			return (1);
		list++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;

	if (!(s1 && set))
		return (NULL);
	start = 0;
	while ((s1[start] != '\0') && (letter_in_list(s1[start], set)))
		start ++;
	end = ft_strlen(s1);
	while ((end > start) && (letter_in_list(s1[end - 1], set)))
		end--;
	new = malloc((end - start + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1 + start, (end - start) + 1);
	return (new);
}
/*
int	main(void)
{
	char *result;

	printf("Teste 1: s1 = \"---Hello World---\", set = \"-\"\n");
	result = ft_strtrim("---Hello World---", "-");
	printf("Resultado: \"%s\"\n\n", result);
	free(result);

	printf("Teste 2: s1 = \"  \t42SP\t  \", set = \" \\t\"\n");
	result = ft_strtrim("  \t42SP\t  ", " \t");
	printf("Resultado: \"%s\"\n\n", result);
	free(result);

	return (0);
}
*/