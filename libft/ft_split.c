/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:57:05 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/17 15:24:43 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i + 1] != '\0')
				i++;
		}
		i++;
	}
	return (count);
}

static int	word_size(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static void	free_str(size_t i, char **str)
{
	while (i > 0)
	{
		i--;
		free(str[i]);
	}
	free(str);
}

static char	**ft_div(char const *s, char **mat, int count, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		mat[i] = ft_substr(s, j, word_size(&s[j], c));
		if (!mat[i])
		{
			free_str(i, mat);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	mat[i] = NULL;
	return (mat);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		count;

	count = word_count(s, c);
	mat = (char **)malloc((sizeof(char *) * (count + 1)));
	if (!mat)
		return (NULL);
	mat = ft_div(s, mat, count, c);
	return (mat);
}
