/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 17:58:20 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/12 18:11:39 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	char c = 'a';
	if (ft_isdigit(c)) {
		printf("%c é um numero.\n", c);
	} else {
		printf("%c não é um numero.\n", c);
	}

	return 0;
}
*/