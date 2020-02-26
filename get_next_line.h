/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpokalch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 19:53:31 by tpokalch          #+#    #+#             */
/*   Updated: 2019/03/08 17:26:14 by tpokalch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define N(x, y) strndst(x, y)
# define BUFF_SIZE 10
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

int					get_next_line(const int fd, char **line);

typedef struct		s_rest
{
	char	*t[2147483647];
	int		sz[2147483647];
}					t_rest;

typedef struct		s_line
{
	char	**n;
	int		sz;
}					t_line;

#endif
