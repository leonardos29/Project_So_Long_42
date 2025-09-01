/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 02:09:22 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/06/12 04:25:17 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	size;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	size = 0;
	while (s[size])
		size++;
	write (1, s, size);
	return (size);
}
