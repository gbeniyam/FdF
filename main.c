/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:50:45 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/10/10 14:50:05 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define iabs(x) ((x) < 0) ? -(x) : (x)
#include "fdf.h"

void	drawline(void *mlx, void *win, t_point p0, t_point p1)
{
	int dx;
	int dy;
	int sx;
	int sy;
	int err;
	int e2;

	dx = iabs(p1.x - p0.x);
	dy = iabs(p1.y - p0.y);
	sx = p0.x < p1.x ? 1 : -1;
	sy = p0.y < p1.y ? 1 : -1;
	err = (dx > dy ? dx : -dy) / 2;

	while (1)
	{
		mlx_pixel_put(mlx, win, p0.x, p0.y, 0xFFFFFF);
		if (p0.x == p1.x && p0.y == p1.y)
			break ;
		e2 = err;
		if (e2 >- dx)
		{
			err -= dy;
			p0.x += sx;
		}
		if (e2 < dy)
		{
			err += dx;
			p0.y += sy;
		}
	}
}

int		main(int argc, char **argv)
{
	t_canvas mlib;
	t_point p0;
	t_point p1;
	char *map_array;

	map_array = NULL;
	p0.x = 50;
	p0.y = 50;
	p1.x = 350;
	p1.y = 350;
	mlib.mlx = mlx_init();
	mlib.win = mlx_new_window(mlib.mlx, WIN_WIDTH, WIN_HEIGHT, "MLX 42");

	if (argc != 2)
	{
		ft_putstr("Usage: ./fdf file.txt");
	}
	parse(argv[1], map_array);
	drawline(mlib.mlx, mlib.win, p0, p1);	
	mlx_loop(mlib.mlx);
}
