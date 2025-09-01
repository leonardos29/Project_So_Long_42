/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:35:09 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/19 21:17:00 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	x;

	x = n;
	if (x < 0)
	{
		ft_putchar_fd ('-', fd);
		x *= -1;
	}
	if (x > 9)
	{
		ft_putnbr_fd (x / 10, fd);
		ft_putchar_fd ((x % 10) + '0', fd);
	}
	else
	{
		ft_putchar_fd((x + '0'), fd);
	}
}
/*
int main()
{
	int	n = -3230;
	ft_putnbr_fd(n,1);
	printf("\n");
}
*/