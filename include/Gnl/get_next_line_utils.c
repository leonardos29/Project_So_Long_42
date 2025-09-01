/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonasil <leonasil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 04:29:28 by leonardo_ou       #+#    #+#             */
/*   Updated: 2025/06/20 14:56:06 by leonasil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len[2];
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	len[0] = 0;
	len[1] = 0;
	while (s1[len[0]])
		len[0]++;
	while (s2[len[1]])
		len[1]++;
	new = malloc(len[0] + len[1] + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		new[i] = s1[i];
	j = -1;
	while (s2[++j])
		new[i++] = s2[j];
	new[i] = '\0';
	return (new);
}

char	*read_file(int fd, char *stash, char *buff)
{
	char		*tmp;
	int			rb;

	rb = 1;
	while (!ft_strchr(stash, '\n') && rb > 0)
	{
		rb = read(fd, buff, BUFFER_SIZE);
		if (rb < 0)
			{
				buff[0] = '\0';
				return (free(stash), NULL);
			}
		buff[rb] = '\0';
		tmp = stash;
		stash = ft_strjoin(stash, buff);
		if (!stash)
			return (free(tmp), NULL);
		free(tmp);
	}
	if (rb == 0 && stash[0] == '\0')
	{
		free(stash);
		return (NULL);
	}
	return (stash);
}

char	*get_lin(char *stash)
{
	char	*line;
	int		i;
	int		j;
	
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	j = 0;
	while (j < i)
	{
		line[j] = stash[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

void	update_buff(char *buff)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] == '\n')
		i++;
	while (buff[i])
		buff[j++] = buff[i++];
	buff[j] = '\0';
}
