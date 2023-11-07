/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xxnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:06:27 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 17:00:34 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xxnbr(unsigned int c)
{
	int		i;
	char	*sym;

	i = 0;
	sym = "0123456789ABCDEF";
	if (c < 16)
		return (ft_chr(sym[c]));
	else
	{
		i = ft_xxnbr(c / 16);
		return (i + ft_xxnbr(c % 16));
	}
}
