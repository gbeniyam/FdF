/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeniyam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 17:48:07 by gbeniyam          #+#    #+#             */
/*   Updated: 2019/08/16 17:48:23 by gbeniyam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define WINDOW_WIDTH			400//1280
# define WINDOW_HEIGHT			400//720

typedef struct		s_mlx
{
	void	*mlx;
	void	*window;
}					t_mlx;

void	draw(t_mlx *mlx);

#endif
