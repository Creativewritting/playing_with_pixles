/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:06:18 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int draw_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness, int transparency)
{
	int t_count;
//	static int repeate = 0;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
	double slope;
	double hold_t_start;
	int	color_temp;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
	if (thickness > 1)
	{
		hold_t_start = (x_count - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	if (transparency == 0)
	{
/*		if (increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x)
				{
					draw_line(mlx, win, x + 1, y, x2 + 1, y2, color, thickness, 1);
					t_count += 1;
				}
			}
			if (increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y)
				{
					draw_line(mlx, win, x, y + 1, x2, y2 + 1, color, thickness, 1);
					t_count += 1;
				}
			}
			if (increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x)
				{
					draw_line(mlx, win, x - 1, y, x2 - 1, y2, color, thickness, 1);
					t_count -= 1;
				}
			}
			if (increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y)
				{
					draw_line(mlx, win, x, y - 1, x2, y2 - 1, color, thickness, 1);
					t_count -= 1;
				}
			}*/
		/*
		 * some times it should change based on y other times x but never both!!!
		 * the bellow code looks close but not quite there.
		 * also need to fix it so the blue is a bit more present
		 * (determine when to repeate a call of the sold color and how many times)
		 */
		color_temp = 0x80000000 + color;
		if (increase_x != 0)
			draw_line(mlx, win, x + 1, y, x2 + 1, y2, color, thickness, 1);
		else if (increase_y == 1)
			draw_line(mlx, win, x, y + 1, x2, y2 + 1, color, thickness, 1);
		if (increase_y == 1 && increase_x == 0)
			draw_line(mlx, win, x, y + 2, x2, y2 + 2, color_temp, thickness, 1);
		if (increase_x != 0)
			draw_line(mlx, win, x + 2, y, x2 + 2, y2, color_temp, thickness, 1);
	//	draw_line(mlx, win, x + 1, y + 1, x2 + 1, y2 + 1, color_temp, thickness, 1);
	}
	else
		color_temp = color;
//	if (transparency == 0 && (repeate < fabs(increase_y) - 2 || repeate < fabs(increase_x) - 2))
//	{
//		repeate++;
	//	color_temp = 0x80000000 + color;
		//draw_line(mlx, win, x + 1, y, x2 + 1, y2, color, thickness, 0);
	//	draw_line(mlx, win, x + 1, y, x2 + 1, y2, color_temp, thickness, 1);
//		color_temp = 0x80000000 + color;
//	}
//	else
//		repeate = 0;
	if (x >= 0 && y >= 0 && x2 >= 0 && y2 >= 0)
	{
	if (y_count <= y2 && x_count <= x2)
	{
	while (!(y_count >= y2 && x_count >= x2))
		place_point_for_line(hold_t_start, &x_count, &y_count, color_temp, mlx, win, increase_x, increase_y, thickness, x2, y2);
	}
	else if (y_count <= y2 && x_count >= x2)
	{
	while (!(y_count >= y2 && x_count <= x2))
		place_point_for_line(hold_t_start, &x_count, &y_count, color_temp, mlx, win, increase_x, increase_y, thickness, x2, y2);
	}
	else if (y_count >= y2 && x_count >= x2)
	{
	while (!(y_count <= y2 && x_count <= x2))
		place_point_for_line(hold_t_start, &x_count, &y_count, color_temp, mlx, win, increase_x, increase_y, thickness, x2, y2);
	}
	else
	{
	while (!(y_count <= y2 && x_count >= x2))
		place_point_for_line(hold_t_start, &x_count, &y_count, color_temp, mlx, win, increase_x, increase_y, thickness, x2, y2);
	}
	return (0);
	}
	else
		return(1);
}
