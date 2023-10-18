/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 19:22:14 by hinve             #+#    #+#             */
/*   Updated: 2023/10/17 15:22:06 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*pointr;

	pointr = malloc(nbr * size);
	if (!pointr)
		return (NULL);
	ft_bzero(pointr, nbr * size);
	return (pointr);
}
