/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dnbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:08:04 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 16:51:42 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_dmaxmin(int c)
{
	if (c == 2147483647)
	{
		ft_str("2147483647");
		return (10);
	}
	else if (c == -2147483648)
	{
		ft_str("-2147483648");
		return (11);
	}
	return (0);
}

int	ft_dnbr(int c)
{
	int	i;

	i = 0;
	if (c == -2147483648 || c == 2147483647)
	{
		i = ft_dmaxmin(c);
		return (i);
	}
	ft_putnbr(c);
	if (c == 0)
		return (1);
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	while (c >= 1)
	{
		i++;
		c /= 10;
	}
	return (i);
}
