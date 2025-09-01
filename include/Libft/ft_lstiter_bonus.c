/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 02:48:35 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/25 02:57:29 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst -> content);
		lst = lst -> next;
	}
}
/*
void print_content(void *content)
{
	printf("Conteúdo: %s\n", (char *)content);
}

int main(void)
{
	t_list *n1 = ft_lstnew("Olá");
	t_list *n2 = ft_lstnew("cadete");
	t_list *n3 = ft_lstnew("42");

	n1->next = n2;
	n2->next = n3;

	printf("Aplicando ft_lstiter:\n");
	ft_lstiter(n1, print_content);

	return 0;
}
*/