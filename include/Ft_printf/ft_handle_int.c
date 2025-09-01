/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 03:01:16 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/06/23 18:55:39 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	int_to_str(char *str, size_t position, long n)
{
	str[position] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[--position] = (n % 10) + '0';
		n /= 10;
	}
}

int	ft_itoa_pr(int n)
{
	char	*s;
	long	ln;
	size_t	s_len;

	ln = n;
	s_len = count_len(ln);
	s = malloc((s_len + 1) * sizeof(char));
	if (!s)
		return (0);
	int_to_str(s, s_len, ln);
	ft_putstr(s);
	free(s);
	return (s_len);
}

int	ft_utoa(unsigned int n)
{
	char			*str;
	size_t			s_len;
	unsigned long	ln;

	ln = n;
	s_len = count_len(ln);
	str = malloc(s_len + 1);
	if (!str)
		return (0);
	int_to_str(str, s_len, ln);
	ft_putstr(str);
	free(str);
	return ((int)s_len);
}
