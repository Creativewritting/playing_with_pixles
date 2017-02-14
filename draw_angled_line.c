/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_angled_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:24:55 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int draw_line_angled(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	int x_count;
	int y_count;

	t_count = 0;
	x_count = x;
	y_count = y;
	while (!(y_count >= y2 && x_count >= x2))
	{
		while (t_count <= thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		t_count = 0;
		if (y_count <= y2)
			y_count++;
		if (x_count <= x2 || y_count == y2)
			x_count++;
	}
	return (0);
}
