/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:05:51 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/26 17:15:08 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_xnbr(unsigned long c)
{
	int		i;
	char	*sym;

	i = 0;
	sym = "0123456789abcdef";
	if (c < 16)
		return (ft_chr(sym[c]));
	else
	{
		i = ft_xnbr(c / 16);
		return (i + ft_xnbr(c % 16));
	}
}
