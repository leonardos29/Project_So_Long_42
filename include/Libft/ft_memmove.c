/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 14:21:57 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/14 14:49:37 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == s)
		return (dest);
	if (d < s)
	{
		while (n--)
		{
			*(d++) = *(s++);
		}
	}
	else
	{
		d += n;
		s += n;
		while (n--)
		{
			*(--d) = *(--s);
		}
	}
	return (dest);
}
/*
int main() {
    char str[] = "abcdef";
    printf("Antes de memmove: %s\n", str);
    ft_memmove(str + 2, str, 4); 
    printf("Depois de memmove: %s\n", str);
    return 0;
}
*/