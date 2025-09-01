/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:02:45 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 21:10:26 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst -> next;
	}
	return (len);
}
/*
int	main(void)
{
	t_list *node1 = ft_lstnew("Primeiro");
	t_list *node2 = ft_lstnew("Segundo");
	t_list *node3 = ft_lstnew("Terceiro");

	node1->next = node2;
	node2->next = node3;

	printf("Tamanho da lista: %d\n", ft_lstsize(node1));

	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/