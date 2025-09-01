/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:34:50 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/28 01:09:46 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iswhite_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		||c == '\f' || c == '\r' || c == ' ')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;

	while (iswhite_space(*nptr))
	{
		nptr++;
	}
	sign = 1;
	if ((*nptr == '+') || (*nptr == '-'))
	{
		if (*nptr == '-')
		{
			sign = -1;
		}
		nptr++;
	}
	res = 0;
	while (ft_isdigit(*nptr))
	{
		res = res * 10 + (*nptr - '0');
		nptr++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	const char *tests[] = {
		"42",
		"   123",
		"-123",
		"+456",
		"   -42abc",
		"abc123",
		"--42",
		"-+42",
		"++42",
		"   +0",
		"",
		"   ",
		"2147483647",  
		"-2147483648", 
	};

	int	i = 0;
	while (tests[i])
	{
		printf("ft_atoi(\"%s\") = %d\n", tests[i], ft_atoi(tests[i]));
		i++;
	}
	return (0);
}
*/