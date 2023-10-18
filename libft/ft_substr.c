/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:32:45 by hinve             #+#    #+#             */
/*   Updated: 2023/10/17 15:26:00 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_k_finder(size_t k, unsigned int start, size_t len, char const *s)
{
	if (ft_strlen(s) <= start)
		k = 0;
	else
		k = ft_strlen(s) - start;
	if (k > len)
		k = len;
	return (k);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	k = ft_k_finder(k, start, len, s);
	subs = (char *)malloc(sizeof(char) * (k + 1));
	if (!subs)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
