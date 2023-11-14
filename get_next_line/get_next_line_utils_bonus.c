/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:50:33 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/11/14 14:51:20 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2, int bytes_read)
{
	int		i;
	int		j;
	char	*str;

	if (!s1)
		s1 = ft_calloc(sizeof(char), 1);
	str = ft_calloc(sizeof(char), ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (j < bytes_read)
	{
		str[i++] = s2[j++];
	}
	free(s1);
	str[i] = '\0';
	return (str);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*pointr;

	pointr = malloc(nbr * size);
	if (!pointr)
		return (NULL);
	ft_bzero(pointr, nbr * size);
	return (pointr);
}

void	ft_bzero(void *s, size_t count)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = s;
	while (i < count)
	{
		aux[i] = '\0';
		i++;
	}
}
