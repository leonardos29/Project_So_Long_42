/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 03:52:17 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/04/28 02:09:42 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			size_max;

	size_max = (size_t)-1;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > size_max / size)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main()
{
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *arr = ft_calloc(nmemb, size);
    if (!arr)
    {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Conteúdo da memória alocada:\n");
    for (size_t i = 0; i < nmemb; i++)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }
    free(arr);
    return 0;
}
*/