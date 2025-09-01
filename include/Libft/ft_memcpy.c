/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 11:59:49 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/14 14:21:01 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
/*
int main()
{
	char nome_completo[] = "Leonardo Souza";
	char destino[4];
	printf("Saida antes do uso do ft_memcpy : \n  %s",destino);
	ft_memcpy(destino,nome_completo,3);
	destino[3] = '\0';
	printf("Saida apos o uso do ft_memcpy : %s ",destino);
	printf("\n");
}
*/