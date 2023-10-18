/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:29:37 by hinve             #+#    #+#             */
/*   Updated: 2023/10/17 15:23:53 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*temp_d;
	unsigned const char	*temp_s;

	temp_d = (unsigned char *)dest;
	temp_s = (unsigned char *)src;
	if (!n || dest == src)
		return (dest);
	if (temp_d > temp_s)
	{
		while (n > 0)
		{
			n--;
			temp_d[n] = temp_s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (temp_d);
}
