/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:29:29 by leonasil          #+#    #+#             */
/*   Updated: 2025/04/23 21:48:43 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!(lst && new))
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last -> next != NULL)
		last = last -> next;
	last -> next = new;
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

    ft_lstadd_back(&head, new_node);

    printf("Lista depois de adicionar o novo nó:\n");
    print_list(head);

    return 0;
}
*/
