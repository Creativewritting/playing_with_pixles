/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:36:20 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:52:50 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playing_with_pixels.h"

int draw_rectangle(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;

	x_count = x;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			mlx_pixel_put(mlx, win, x_count, y_count, color);	
			if (y <= y2)
				y_count++;
			else
				y_count--;
		}
		if (x <= x2)
			x_count++;
		else
			x_count--;
	}
	return (0);
}
