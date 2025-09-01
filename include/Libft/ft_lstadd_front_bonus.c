/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 20:29:49 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 21:01:03 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!(lst && new))
		return ;
	new -> next = *lst;
	*lst = new;
}
/*
void	print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *) lst -> content);
        lst = lst->next;
    }
    printf("NULL\n");
}
int main()
{
	int val1 = 10;
	int val2 = 20;
	t_list *head = ft_lstnew(&val1);  
	t_list *new_node = ft_lstnew(&val2); 
 
    printf("Lista antes de adicionar o novo nó:\n");
    print_list(head);

    ft_lstadd_front(&head, new_node);

    printf("Lista depois de adicionar o novo nó:\n");
    print_list(head);

    return 0;
}
*/