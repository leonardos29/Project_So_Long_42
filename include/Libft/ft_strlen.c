/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:16:38 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/16 19:21:15 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		size ++;
		s ++;
	}
	return (size);
}
/*
int main(void)
{
    const char *str = "Leo";
    printf("Tamanho da string: %zu\n", ft_strlen(str));
    return 0;
}
*/