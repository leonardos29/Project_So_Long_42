/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_moves_on_screen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 06:18:40 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 06:29:53 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	put_moves_on_screen(t_game_data *data)
{
	char	*moves_str;
	char 	*display_str;
	
	moves_str = ft_itoa(data->moves);
	display_str = ft_strjoin("Moves: ", moves_str)
	mlx_string_put(data->mlx, data->win, 12, 15, 0xFFFFFF, moves_str);
	free(moves_str);
}
