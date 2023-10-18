/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:03:23 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/17 15:26:42 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *data, int c, size_t count)
{
	size_t	i;
	char	*aux;

	i = 0;
	aux = data;
	while (i < count)
	{
		aux[i] = c;
		i++;
	}
	return (data);
}
