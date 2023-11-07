/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:04:52 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 17:04:00 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char str, va_list vargs)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_chr(va_arg(vargs, int));
	if (str == 's')
		i += ft_str(va_arg(vargs, char *));
	if (str == 'd' || str == 'i')
		i += ft_dnbr(va_arg(vargs, int));
	if (str == 'u')
		i += ft_unbr(va_arg(vargs, unsigned int));
	if (str == '%')
		i += ft_chr('%');
	if (str == 'x')
		i += ft_xnbr(va_arg(vargs, unsigned int));
	if (str == 'X')
		i += ft_xxnbr(va_arg(vargs, unsigned int));
	if (str == 'p')
		i += ft_p((unsigned long)(va_arg(vargs, void *)));
	return (i);
}
