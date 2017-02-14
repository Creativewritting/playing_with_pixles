/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_partial_circle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:35:25 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int		draw_partial_circle(void *mlx, void *win, double r, double start, double end, int x_center, int y_center, int color, int thickness)
{
	//x = x_center + r cos theta
	//y = y_center + r sin theta
	double x;
	double y;
	double theta;
/*	int thicknes_x;
	int thicknes_y;
*/	int thickness_r;
	int hold_t_start;

	theta = start;
	if (thickness > 1)
		hold_t_start = -1 * (thickness / 2);
	else
		hold_t_start= 0;
	thickness_r = hold_t_start;
	while (theta <= end / 58)
	{
		while (thickness_r <= hold_t_start + thickness)
		{
			x = x_center + (r + thickness_r) * cos(theta);
			y = y_center + (r + thickness_r)* sin(theta);
			mlx_pixel_put(mlx, win, x, y, color);
			thickness_r += 1;
		}
		thickness_r = hold_t_start;
	//note the smaller the more acurate but any smaller and it takes to long.
		theta += .001;
	}
	return (0);
}
