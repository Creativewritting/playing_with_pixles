/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_circle.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:31:22 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int		fill_circle(void *mlx, void *win, double r, int x_center, int y_center, int color)
{
	//x = x_center + r cos theta
	//y = y_center + r sin theta
	double x;
	double y;
	double theta;
	double r_count;

	theta = 0;
	r_count = 0;
	while (theta <= 360)
	{
		while (r_count <= r)
		{
			x = x_center + r_count  * cos(theta);
			y = y_center + r_count * sin(theta);
			mlx_pixel_put(mlx, win, x, y, color);
			r_count += 1;
		}
		r_count = 0;
		//note the smaller the more acurate but any smaller and it takes to long.
		theta += .01;
	}
	return (0);
}
