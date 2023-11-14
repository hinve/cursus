/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpino-mo <hpino-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:50:30 by hpino-mo          #+#    #+#             */
/*   Updated: 2023/11/14 14:51:11 by hpino-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <ctype.h>
# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 25
# endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2, int bytes_read);
size_t	ft_strlen(char *s);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen_nl(char *s);
void	*ft_calloc(size_t nbr, size_t size);
void	ft_bzero(void *s, size_t count);
void	*ft_calloc(size_t nbr, size_t size);

#endif