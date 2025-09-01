/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 20:55:15 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/19 19:03:59 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n--)
	{
		*ptr++ = value;
	}
	return (s);
}
/*
int main()
{
    // Declaração de um array de 10 caracteres
    char	buffer[10];
    
    ft_memset (buffer, 520, sizeof(buffer));

    printf ("Conteúdo do array após ft_memset: ");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d ",buffer[i]);
    }
    printf("\n");

    return 0;
}
*/