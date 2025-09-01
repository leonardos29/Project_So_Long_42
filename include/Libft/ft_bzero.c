/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 16:36:57 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/19 19:04:54 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = 0;
	}
	return (s);
}
/*
int main() {

    char buffer[10];
    for (int i = 0; i < 10; i++) buffer[i] = 'A';
	printf("Antes de zerar a memoria : ");
	for (int i = 0; i < 10; i++) {
        printf("%d", buffer[i]);
    }
	printf("\n");
    ft_bzero(buffer, 10);
	printf("Depois de zerar a memoria : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", buffer[i]);
    }
    return 0;
}
*/