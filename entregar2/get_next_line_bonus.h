/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 16:33:26 by jsilva-d          #+#    #+#             */
/*   Updated: 2021/03/22 16:06:50 by jsilva-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

typedef struct	s_str
{
	char			*content;
	struct s_str	*next;
}				t_str;

typedef struct	s_fd
{
	int				fd;
	t_str			*str;
	struct s_fd		*next;
}				t_fd;

int				get_next_line(int fd, char **line);
char			*ft_strdup(char const *s1);
t_fd			*find_fd(t_fd **list, int fd, int *new);
int				find_n1(t_str *str, char *sim_str);
int				read_file(t_str **str, char *buffer, int fd);
int				lst_clear(t_str **list);

#endif
