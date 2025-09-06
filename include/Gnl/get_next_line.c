/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonardo_ouza <leonardo_ouza@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:29:16 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/09/06 06:07:30 by leonardo_ou      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buff[BUFFER_SIZE + 1];
	char		*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (buff[0] != '\0')
		stash = ft_strjoin("", buff);
	else
	{
		stash = malloc(1);
		if (!stash)
			return (NULL);
		stash[0] = '\0';
	}
	stash = read_file(fd, stash, buff);
	if (!stash)
		return (NULL);
	line = get_lin(stash);
	update_buff(buff);
	free(stash);
	return (line);
}
