/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 17:48:07 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/10/07 20:05:58 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WIN_WIDTH			500//1280
# define WIN_HEIGHT			500//720
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include <stdlib.h>
# include "minilibx/mlx.h"
# include "libft/libft.h"

typedef struct		s_canvas
{
	void	*mlx;
	void	*win;
}					t_canvas;

typedef struct		s_point
{
	int x;
	int y;
}					t_point;

void	drawline(void *mlx, void *win, t_point p0, t_point p1);

int		parse(const char *filename, char *array);
#endif
