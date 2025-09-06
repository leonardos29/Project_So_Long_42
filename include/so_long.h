/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 06:10:08 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 06:23:00 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../include/Libft/libft.h"
# include "../include/Gnl/get_next_line.h"
# include "../include/Ft_printf/ft_printf.h"
# include "../include/minilibx-linux/mlx.h"

typedef struct s_game_data
{
	char	**map;
	int		map_h;
	int		map_w;
	int		floors;
	int		walls;
	int		collect;
	int		collected;
	int		moves;
	int		exit;
	int		player;
	int		player_x;
	int		player_y;
	int		exit_x;
	int		exit_y;
	int		r_collects;
	int		r_exit;
	int		win_h;
	int		win_w;
	int		tile_h;
	int		tile_w;
	void	*mlx;
	void	*win;
	void	*wall_img;
	void	*floor_img;
	void	*player_img;
	void	*collect_img;
	void	*exit_img;
}	t_game_data;

void	check_map_name(char *map_name);
void	read_map(char *name, t_game_data *data);
void	check_map_errors(t_game_data *data);
void	check_valid_paths(t_game_data *data);
void	game_init(t_game_data *data);
int		handle_key(int keycode, t_game_data *data);
void	render_map(t_game_data *data);
void	clear_map(char **map, int height);
void	clear_victory(t_game_data *data);
void	error(t_game_data *data, char *error);
void	clear_game(t_game_data *data);
int		close_game(t_game_data *data);
void	put_moves_on_screen(t_game_data *data);
#endif
