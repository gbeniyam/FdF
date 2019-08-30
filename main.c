/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 12:50:45 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/08/29 21:28:56 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define iabs(x) ((x) < 0) ? -(x) : (x)
#include <unistd.h>
#include "minilibx/mlx.h"
#include <math.h>

typedef struct s_mlx {
	void	*mlx;
	void	*win;
} t_mlx;

typedef struct s_point {
	int x;
	int y;
} t_point;

//void	drawline(t_point p1, t_point p2, void *mlx, void *win)


// ------- Use Nilson's algo, remove this stuff below
void	drawline(t_point p1, t_point p2)
{
	int dx;
	int dy;
	int m;
	int i;
	int j1;
	int j2;
	int e; //epsilon aka error; distance from line to nearest pixel edge

	dx = p2.x - p1.x;
	dy = p2.y - p1.y;
	m = dy/dx;
	i = iabs(p1.x);
	j1 = iabs(p1.y);
	j2 = iabs(p2.y);
	e = 0;
	if (dx > 0)
	{
		i++;
		e = -(1 - (p1.x - i) - (p1.y - j1) * (dx / dy));
	}
	else
	{
		i--;
		e = -((p1.x - i) - (p1.y - j1) * (dx / dy));
	}
	for (int jcnt = j2 - j1; j1 < j2; jcnt++)
	{
		while (e >= 0)
		{
			i++;
			e--;
		}
//		mlx_pixel_put(mlx, win, i, jcnt, 0xFFFFFF);
		e+= (int)m;
	}
}
	void *mlx;
	void *win;

int		main()
{
	t_mlx MLX;
	t_point p1;
	t_point p2;

	p1.x = 50;
	p1.y = 50;
	p2.x = 350;
	p2.y = 350;
//	mlx = mlx_init();
//	win = mlx_new_window(mlx, 500, 500, "MLX 42");
//	drawline(p1, p2, mlx, win);	
	drawline(p1, p2);
	mlx_loop(MLX.mlx);
}
