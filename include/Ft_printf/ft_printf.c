/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 01:15:41 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/07/05 10:38:27 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fix_format(va_list args, const char format)
{
	int	len;

	len = 0;
	if (format == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		len = ft_ptr_to_hex(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		len = ft_itoa_pr(va_arg(args, int));
	else if (format == 'u')
		len = ft_utoa(va_arg(args, int));
	else if (format == 'x')
		len = ft_to_hex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (format == 'X')
		len = ft_to_hex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (format == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			i;
	int			size;

	if (!format)
		return (-1);
	i = 0;
	size = 0;
	va_start (args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			size += fix_format(args, format[i]);
		}
		else if (format[i] == '%' && !format[i + 1])
			return (-1);
		else
			size += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (size);
}
