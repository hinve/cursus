/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:05:42 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/17 15:23:24 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_get_long(long n)
{
	int	j;

	j = 0;
	if (n == 0)
		j++;
	if (n < 0)
	{
		j++;
		n *= -1;
	}
	while (n > 0)
	{
		n = (n / 10);
		j++;
	}
	return (j);
}

static char	*ft_create_array(char *str, long n, unsigned int pos, long int nbr)
{
	while (n > 0)
	{
		nbr = n % 10;
		n = n / 10;
		str[pos] = nbr + '0';
		pos--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		count;
	unsigned int	pos;
	long			nbr;
	long			nl;

	nbr = 0;
	nl = (long)n;
	count = ft_get_long(nl);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count] = '\0';
	pos = count - 1;
	if (nl == 0)
		str[0] = '0';
	if (nl < 0)
	{
		nl *= -1;
		str[0] = 45;
	}
	str = ft_create_array(str, nl, pos, nbr);
	return (str);
}
