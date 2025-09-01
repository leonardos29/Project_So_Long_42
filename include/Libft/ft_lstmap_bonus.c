/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 03:00:47 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/25 04:44:59 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*list;
	t_list	*new_node;
	void	*new_content;

	if (!f || !del)
		return (NULL);
	list = NULL;
	while (lst)
	{
		new_content = f(lst -> content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&list, new_node);
			lst = lst -> next;
		}
	}
	return (list);
}
/*
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d -> ", *(int *)lst->content); 
        lst = lst->next;
    }
    printf("NULL\n");
}

void free_content(void *content)
{
    free(content);
}

void *multiply_by_two(void *content)
{
    int *value = (int *)content;
    int *result = malloc(sizeof(int)); 
    if (!result)
        return (NULL); 
    *result = *value * 2;
    return (result);
}

int main()
{
    t_list *list = NULL;
    t_list *new_list = NULL;
    int *value1 = malloc(sizeof(int));
    int *value2 = malloc(sizeof(int));
    int *value3 = malloc(sizeof(int));

    *value1 = 1;
    *value2 = 2;
    *value3 = 3;
	
    ft_lstadd_back(&list, ft_lstnew(value1));
    ft_lstadd_back(&list, ft_lstnew(value2));
    ft_lstadd_back(&list, ft_lstnew(value3));

    printf("Original List: ");
    print_list(list); 

    new_list = ft_lstmap(list, multiply_by_two, free_content);

    printf("Mapped List (multiplied by 2): ");
    print_list(new_list); 

    ft_lstclear(&list, free_content);
    ft_lstclear(&new_list, free_content);

    return 0;
}
*/