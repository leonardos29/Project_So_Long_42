/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_name.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 05:47:35 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 05:48:30 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	check_map_name(char *map_name)
{
	int	len;

	if (!map_name)
		error(NULL, "Error: invalid file name");
	len = ft_strlen(map_name);
	if (len < 4 || ft_strncmp(map_name + len - 4, ".ber", 4) != 0)
		error(NULL, "Error: file must have .ber extension");
}
