/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_point_for_line.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:25:19 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

void place_point_for_line(double hold_t_start, double *x_count, double * y_count, int color, void *mlx, void *win, double increase_x, double increase_y, int thickness, int x2, int y2)
{
	int t_count;

	t_count = 0;
	while (t_count <= hold_t_start + thickness)
	{
		mlx_pixel_put(mlx, win, *x_count + t_count, *y_count, color);
		t_count += 1;
	}
	t_count = hold_t_start;
	printf("increase_y == %f\n", .1 * increase_y);
	printf("increase_x == %f\n", .1 * increase_x);
	printf("thickness == %d\n", thickness);
	printf("hold_t_start == %f\n", hold_t_start);
	if (*y_count != y2)
		printf(" y_count == %f\n", (*y_count += 1 * increase_y));
	if (*x_count != x2)
		printf("x_count == %f\n", (*x_count += 1 * increase_x));
}
