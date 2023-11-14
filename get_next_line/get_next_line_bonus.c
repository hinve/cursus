/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:49:22 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/11/14 15:47:08 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_stsh_clean(char *stash)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	aux = ft_calloc(sizeof(char), (ft_strlen(stash) - i + 1));
	if (!aux)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
		aux[j++] = stash[i++];
	aux[j] = '\0';
	free(stash);
	return (aux);
}

static char	*ft_get_line(char *stash)
{
	char	*aux;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	aux = ft_calloc(sizeof(char), (i + 1 + (stash[i] == '\n')));
	if (!aux)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		aux[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		aux[i] = stash[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

static char	*ft_get_read_stash(char *stash, int fd)
{
	int		bytes_read;
	char	*save_read;

	bytes_read = 1;
	save_read = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!save_read)
		return (NULL);
	while (!ft_strchr(save_read, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, save_read, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(stash);
			free(save_read);
			return (NULL);
		}
		save_read[bytes_read] = '\0';
		stash = ft_strjoin(stash, save_read, bytes_read);
	}
	free(save_read);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[4096];
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (0);
	stash[fd] = ft_get_read_stash(stash[fd], fd);
	if (!stash[fd])
		return (NULL);
	line = ft_get_line(stash[fd]);
	stash[fd] = ft_stsh_clean(stash[fd]);
	return (line);
}

