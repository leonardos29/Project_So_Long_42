/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 05:52:45 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 05:52:45 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

int	close_game(t_game_data *data)
{
	error(data, NULL);
	return (0);
}

void	clear_game(t_game_data *data)
{
	if (!data)
		return ;
	if (data->map)
		clear_map(data->map, data->map_h);
	if (data->wall_img)
		mlx_destroy_image(data->mlx, data->wall_img);
	if (data->floor_img)
		mlx_destroy_image(data->mlx, data->floor_img);
	if (data->player_img)
		mlx_destroy_image(data->mlx, data->player_img);
	if (data->collect_img)
		mlx_destroy_image(data->mlx, data->collect_img);
	if (data->exit_img)
		mlx_destroy_image(data->mlx, data->exit_img);
	if (data->win)
		mlx_destroy_window(data->mlx, data->win);
	if (data->mlx)
	{
		mlx_destroy_display(data->mlx);
		free(data->mlx);
	}
}

void	clear_map(char **map, int height)
{
	int	i;

	if (!map)
		return ;
	i = 0;
	while (i < height)
	{
		if (map[i])
			free(map[i]);
		i++;
	}
	free(map);
}

void	clear_victory(t_game_data *data)
{
	ft_printf("Parabéns! Você venceu em %d movimentos!\n", data->moves + 1);
	clear_game(data);
	exit(0);
}

void	error(t_game_data *data, char *error)
{
	if (data)
		clear_game(data);
	if (error)
		ft_printf("%s\n", error);
	exit(0);
}
