/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:11:44 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 19:28:16 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,
char*))
{
	unsigned int	i;

	if (!(s && f))
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(f)(i, &s[i]);
		i++;
	}
}
/*
void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int main()
{
	char str[] = "hello world";
	ft_striteri(str, to_upper_even);
	printf("%s \n",str);
}
*/