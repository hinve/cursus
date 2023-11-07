/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:07:08 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 16:52:29 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unbr(unsigned int c)
{
	int				i;
	unsigned int	n;

	i = 0;
	n = c;
	if (c > 9)
	{
		ft_unbr(c / 10);
	}
	ft_chr((c % 10) + '0');
	if (n == 0)
		return (1);
	while (n >= 1)
	{
		i++;
		n /= 10;
	}
	return (i);
}
