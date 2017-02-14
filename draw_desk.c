/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_desk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:59:28 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 17:14:31 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

void	draw_desk(void *mlx, void *win)
{
	int x;
	int y;
	int x2;
	int y2;
	int color;

	x = 50;
	y = 50;
	x2 = 800;
	y2 = 500;
	color = 0x00996633;
	draw_rectangle_textured(mlx, win, x, y, x2, y2, color);
	mlx_key_hook(win, if_hook, mlx);
	mlx_loop(mlx);
}
