/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 09:02:55 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/18 09:07:27 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
	{
		return (1);
	}
	return (0);
}
/*
int main() 
{
    printf("Teste 1 (c = 'A'): %d\n", ft_isprint('A'));  
	printf("Teste 2 (c = 'Quebra de linha'): %d\n", ft_isprint('\n'));  
    return 0;
}
*/
