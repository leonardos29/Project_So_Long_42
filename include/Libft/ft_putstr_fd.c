/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 20:03:29 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/19 20:14:07 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	size;

	if (s == NULL)
		return ;
	size = ft_strlen(s);
	write (fd, s, size);
}
/*
int main()
{
	char	str[] = "Leonardo";
	ft_putstr_fd(str,1);
	printf("\n");
	ft_putstr_fd(NULL,1);
	return (0);
}
*/