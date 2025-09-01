/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 04:46:27 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/06/23 19:08:12 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_to_hex(unsigned int n, const char *hex)
{
	char	str[9];
	int		i;

	i = 8;
	str[i] = '\0';
	if (n == 0)
	{
		ft_putchar('0');
		return (1);
	}
	while (n)
	{
		str[--i] = hex[n % 16];
		n /= 16;
	}
	ft_putstr(&str[i]);
	return (8 - i);
}

int	ft_ptr_to_hex(void *ptr)
{
	char			str[17];
	int				i;
	unsigned long	addr;

	if (!ptr)
		return (ft_putstr("(nil)"));
	addr = (unsigned long)ptr;
	i = 16;
	str[i] = '\0';
	while (addr)
	{
		str[--i] = "0123456789abcdef"[addr % 16];
		addr /= 16;
	}
	ft_putstr("0x");
	ft_putstr(&str[i]);
	return (2 + (16 - i));
}
