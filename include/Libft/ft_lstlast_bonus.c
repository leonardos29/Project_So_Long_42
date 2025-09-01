/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:11:59 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 21:28:31 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list *n1 = ft_lstnew("Node 1");
	t_list *n2 = ft_lstnew("Node 2");
	t_list *n3 = ft_lstnew("Node 3");

	n1->next = n2;
	n2->next = n3;

	t_list *last = ft_lstlast(n1);
    printf("Último nó: %s\n", (char *)last->content);
	
	free(n1);
	free(n2);
	free(n3);

	return 0;
}
*/