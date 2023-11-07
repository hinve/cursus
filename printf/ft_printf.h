/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:38:32 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/10/24 16:38:46 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <ctype.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_chr(int c);
int		ft_format(char str, va_list vargs);
int		ft_xnbr(unsigned long c);
int		ft_xxnbr(unsigned int c);
int		ft_str(char *str);
int		ft_dnbr(int c);
int		ft_unbr(unsigned int c);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(char *s);
int		ft_p(unsigned long p);

#endif