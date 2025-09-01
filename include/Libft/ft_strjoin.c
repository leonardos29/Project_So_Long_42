/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:41:59 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/20 14:17:21 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		k;
	char	*new;

	if (!(s1 && s2))
		return (NULL);
	new = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k] != '\0')
	{
		new[i] = s2[k];
		i++;
		k++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main() {
    const char *dst = "Leo";
    const char *src = "nardo!";
    char  *result = ft_strjoin(dst, src);
    printf("Resultado: %s\n", result);
    free(result);
    return 0;
}
*/