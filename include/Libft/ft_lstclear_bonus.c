/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 02:01:34 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/25 02:46:29 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
	*))
{
	t_list	*temp;

	if (!(lst && del))
		return ;
	while (*lst)
	{
		temp = (*lst)-> next;
		del((*lst)-> content);
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
/*
void del(void *content)
{
    printf("Liberando conteúdo: %s\n", (char *)content);
    free(content);
}

int main(void)
{
	char *s1 = ft_strdup("Primeiro");
	char *s2 = ft_strdup("Segundo");
	char *s3 = ft_strdup("Terceiro");
	t_list *list = ft_lstnew(s1);
    list->next = ft_lstnew(s2);
    list->next->next = ft_lstnew(s3);

    printf("Antes de limpar a lista:\n");
    t_list *temp = list;
    while (temp) {
        printf("  Conteúdo: %s\n", (char *)temp->content);
        temp = temp->next;
    }

    ft_lstclear(&list, del);

    if (list == NULL) {
        printf("Lista foi liberada com sucesso. list = NULL\n");
    }

    return 0;
}
*/