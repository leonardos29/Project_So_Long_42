/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 05:53:01 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 05:55:03 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/so_long.h"

void	count_height_map(t_game_data *data, char *name)
{
	int		fd;
	char	*line;

	fd = open(name, O_RDONLY);
	if (fd < 0)
		error(NULL, "Error: Cannot open the file!");
	data->map_h = 0;
	line = get_next_line(fd);
	while (line)
	{
		if (line[0] == '\n')
		{
			free(line);
			error(NULL, "Map error: remove new line!");
		}
		data->map_h++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
}

void	construct_map(t_game_data *data, char *name)
{
	int		fd;
	char	*line;
	int		i;

	fd = open(name, O_RDONLY);
	if (fd < 0)
		error(data, "Error: Cannot reopen the file!");
	i = 0;
	line = get_next_line(fd);
	while (line)
	{
		data->map[i] = ft_strtrim(line, "\n");
		free(line);
		if (!data->map[i])
		{
			clear_map(data->map, i);
			error(NULL, "Error: malloc failed in ft_strtrim");
		}
		i++;
		line = get_next_line(fd);
	}
	data->map[i] = NULL;
	close(fd);
}

void	read_map(char *name, t_game_data *data)
{
	count_height_map(data, name);
	data->map = malloc(sizeof(char *) * (data->map_h + 1));
	if (!data->map)
		error(NULL, "Error: malloc failed for map array");
	construct_map(data, name);
}
