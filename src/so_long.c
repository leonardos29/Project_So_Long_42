/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 05:35:43 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 05:37:52 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	main(int argc, char **argv)
{
	char		*map_name;
	t_game_data	game_data;

	if (argc != 2)
		error(NULL, "Error: Please use: ./so_long 'map path'");
	map_name = argv[1];
	check_map_name(map_name);
	read_map(map_name, &game_data);
	check_map_errors(&game_data);
	game_init(&game_data);
	return (0);
}
