/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 01:40:47 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/25 01:57:34 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void
	*))
{
	if (!(lst && del))
		return ;
	del(lst -> content);
	free (lst);
}
/*
void del(void *content)
{
    printf("Liberando conteúdo: %s\n", (char *)content);
    free(content);
}

int main(void)
{
    char *str = ft_strdup("Hello, Libft!");
    if (!str)
        return (1);

    t_list *node = ft_lstnew(str);
    if (!node)
    {
        free(str);
        return (1);
    }

    ft_lstdelone(node, del);

    return 0;
}
*/