/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:55:52 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 17:39:24 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	vargs;

	va_start(vargs, str);
	i = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		if (*str == '%')
			i += ft_format(*(++str), vargs);
		else
			i += write(1, str, 1);
		str++;
	}
	va_end(vargs);
	return (i);
}
