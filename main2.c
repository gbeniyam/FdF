#include "fdf.h"
#include <stdio.h>

void 	draw(t_mlx *mlx)
{
	int x;
	int y;

	y = 50;
	while (y < 150)
	{
		x = 50;
		while (x < 150)
		{
			mlx_pixel_put(mlx->mlx, mlx->window, x, y, 0x99FFFFFF); // color: 0x(Alpha)(Red)(Green)(Blue)
			x++;
		}
		y++;
	}
}

int		key_pressed(int keycode, t_mlx *mlx)
{
	printf("key code: %d\n", keycode);
	if (keycode == 49)
		mlx_clear_window(mlx->mlx, mlx->window);
	else if (keycode == 53)
		exit(0);
	return (0);
}

int		mouse_clicked(int button, int x, int y, t_mlx *mlx)
{
	printf("button code: %d\t- coordinate (x: %d, y: %d)\n", button, x, y);
	draw(mlx);
	return (0);
}

int		main(void)
{
	t_mlx *mlx;

	mlx = ft_memalloc(sizeof(t_mlx));
	mlx->mlx = mlx_init();
	mlx->window = mlx_new_window(mlx->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, "mlx 42");

	draw(mlx);
	
	mlx_key_hook(mlx->window, key_pressed, mlx);
	mlx_mouse_hook(mlx->window, mouse_clicked, mlx);
	mlx_loop(mlx->mlx);
}
