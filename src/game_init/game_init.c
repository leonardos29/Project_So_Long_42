/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 05:56:42 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 06:21:14 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	load_img(t_game_data *data)
{
	data->wall_img = mlx_xpm_file_to_image(data->mlx, "assets/wall.xpm",
			&data->tile_w, &data->tile_h);
	data->floor_img = mlx_xpm_file_to_image(data->mlx, "assets/floor.xpm",
			&data->tile_w, &data->tile_h);
	data->player_img = mlx_xpm_file_to_image(data->mlx, "assets/player.xpm",
			&data->tile_w, &data->tile_h);
	data->collect_img = mlx_xpm_file_to_image(data->mlx, "assets/collect.xpm",
			&data->tile_w, &data->tile_h);
	data->exit_img = mlx_xpm_file_to_image(data->mlx, "assets/exit_close.xpm",
			&data->tile_w, &data->tile_h);
	if (!data->wall_img || !data->floor_img || !data->player_img
		|| !data->collect_img || !data->exit_img)
		error(data, "Error: failed to load images");
}

void	*get_tile_image(t_game_data *data, char tile)
{
	if (tile == '0')
		return (data->floor_img);
	else if (tile == '1')
		return (data->wall_img);
	else if (tile == 'P')
		return (data->player_img);
	else if (tile == 'C')
		return (data->collect_img);
	else if (tile == 'E')
		return (data->exit_img);
	return (NULL);
}

void	render_map(t_game_data *data)
{
	int		x;
	int		y;
	void	*img;

	y = 0;
	while (y < data->map_h)
	{
		x = 0;
		while (x < data->map_w)
		{
			img = get_tile_image(data, data->map[y][x]);
			if (img)
				mlx_put_image_to_window(data->mlx, data->win, img, x
					* data->tile_w, y * data->tile_h);
			x++;
		}
		y++;
	}
	put_moves_on_screen(data);
}

void	create_win(t_game_data *data)
{
	data->win_h = data->map_h * data->tile_h;
	data->win_w = data->map_w * data->tile_w;
	data->win = mlx_new_window(data->mlx, data->win_w, data->win_h, "SO LONG");
	if (!data->win)
		error(data, NULL);
}

void	game_init(t_game_data *data)
{
	data->mlx = mlx_init();
	if (!data->mlx)
		error(data, NULL);
	data->collected = 0;
	data->moves = 0;
	data->r_collects = 0;
	data->r_exit = 0;
	load_img(data);
	create_win(data);
	render_map(data);
	mlx_key_hook(data->win, handle_key, data);
	mlx_hook(data->win, 17, 0, close_game, data);
	mlx_loop(data->mlx);
}
