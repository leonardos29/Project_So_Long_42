/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 20:39:19 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/28 01:15:30 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_l;
	size_t	src_l;
	size_t	i;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	i = 0;
	if (size <= dst_l)
		return (size + src_l);
	while ((i < size - dst_l - 1) && (src[i] != '\0'))
	{
		dst[dst_l + i] = src[i];
		i++;
	}
	dst[dst_l + i] = '\0';
	return (dst_l + src_l);
}
/*
int main() {
    char dst[11] = "Leo, ";
    const char *src = "nardo!";
    size_t result = ft_strlcat(dst, src, sizeof(dst));
    printf("Resultado: %s\n", dst);
    printf("Tamanho da string concatenada: %zu\n", result);
    return 0;
}
*/