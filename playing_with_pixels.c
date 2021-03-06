/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playing_with_pixels.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:54:41 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int		done(int keycode)
{
	if (keycode != 49)
		exit(0);
	return (0);
}

int draw_line_stiched(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
//	double slope;
	double hold_t_start;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
/*	slope = 0;
	if ((x2 - x) == 0)
	{
		increase_x = 0;
		increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		increase_x = 1;
		increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
			increase_y = (y2 - y) / (x2 - x);
			//		increase_y = (y2 - y) / (x2 - x);
		else if (slope != 0)
*///			increase_x =/* modf(((y2 - y)/(x2 - x)), &slope);*/ (x2 - x) * (1 / slope);
/*		slope = 1 / slope;
	}
*/	if (thickness > 1)
	{
		hold_t_start = (x - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	while (!(y_count == y2 && x_count == x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		t_count = hold_t_start;
		printf("increase_y == %f\n", increase_y);
		printf("increase_x == %f\n", increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
	//	printf("slope == %f\n", slope);
		if (y_count == y2 && x_count == x2)
			x_count += 1;
		if (y_count < y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count < x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
	}
	return (0);
}

int draw_line_hashed_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
//	double slope;
	double hold_t_start;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
/*	slope = 0;
	if ((x2 - x) == 0)
	{
		increase_x = 0;
		increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		increase_x = 1;
		increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
			increase_y = (y2 - y) / (x2 - x);
			//		increase_y = (y2 - y) / (x2 - x);
		else if (slope != 0)
*///			increase_x =/* modf(((y2 - y)/(x2 - x)), &slope);*/ (x2 - x) * (1 / slope);
/*		slope = 1 / slope;
	}
*/	if (thickness > 1)
	{
		hold_t_start = (x - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	while (!(y_count == y2 && x_count == x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count + t_count, color);
			t_count++;
		}
		t_count = hold_t_start;
		printf("increase_y == %f\n", increase_y);
		printf("increase_x == %f\n", increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf("slope == %f\n", slope);
		if (y_count == y2 && x_count == x2)
			x_count += 1;
		if (y_count < y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count < x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
	}
	return (0);
}

int draw_line_curly(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
//	double slope;
	double hold_t_start;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
/*	slope = 0;
	if ((x2 - x) == 0)
	{
		increase_x = 0;
		increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		increase_x = 1;
		increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
			increase_y = (y2 - y) / (x2 - x);
			//		increase_y = (y2 - y) / (x2 - x);
		else if (slope != 0)
*///			increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope);
/*		slope = 1 / slope;
	}
*/	if (thickness > 1)
	{
		hold_t_start = (x_count - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	while (!(y_count == y2 && x_count == x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		t_count = hold_t_start;
		while (t_count <= hold_t_start + increase_x)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		t_count = hold_t_start;
		while (t_count <= hold_t_start + increase_y)
		{
			mlx_pixel_put(mlx, win, x_count, y_count + increase_y, color);
			t_count++;
		}
		t_count = hold_t_start;
		printf("increase_y == %f\n", increase_y);
		printf("increase_x == %f\n", increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf("slope == %f\n", slope);
		if (y_count == y2 && x_count == x2)
			x_count += 1;
		if (y_count < y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count < x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
	}
	return (0);
}

int draw_line_dotted(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
//	double slope;
	double hold_t_start;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
/*	slope = 0;
	if ((x2 - x) == 0)
	{
		increase_x = 0;
		increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		increase_x = 1;
		increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
			increase_y = (y2 - y) / (x2 - x);
			//		increase_y = (y2 - y) / (x2 - x);
		else if (slope != 0)
*///			increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope);
/*		slope = 1 / slope;
	}
*/	if (thickness > 1)
	{
		hold_t_start = (x_count - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	while (!(y_count == y2 && x_count == x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		if (increase_x != 1)
		{
		t_count = hold_t_start + 1;
		while (t_count <= hold_t_start + increase_x - 2)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count++;
		}
		}
		if (increase_y != 1)
		{
		t_count = hold_t_start + 1;
			while (t_count <= hold_t_start + increase_y - 2)
		{
			mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
			t_count++;
		}
		}
		t_count = hold_t_start;
		printf("increase_y == %f\n", increase_y);
		printf("increase_x == %f\n", increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf("slope == %f\n", slope);
		if (y_count == y2 && x_count == x2)
			x_count += 1;
		if (y_count < y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count < x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
	}
	return (0);
}

int draw_filled_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
{
	int t_count;
	double x_count;
	double y_count;
	double increase_y;
	double increase_x;
//	double slope;
	double hold_t_start;

	t_count = 0;
	x_count = x;
	y_count = y;
	increase_y = 1;
	increase_x = 1;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
/*	slope = 0;
	if ((x2 - x) == 0)
	{
		increase_x = 0;
		increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		increase_x = 1;
		increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
		{
			increase_y = (y2 - y) / (x2 - x);
			if (increase_y < 0 && (y2 - y) > 0)
			{
				increase_y *= -1;
				increase_x *= -1;
			}
			if (increase_y > 0 && (y2 - y) < 0 && (x2 - x) < 0)
			{
				increase_y *= -1;
				increase_x *= -1;
			}
		//		increase_y = (y2 - y) / (x2 - x);
		}
		else if (slope != 0)
		{
			if (slope >= 0)
*///				increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope);
//			else	
//				increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope) * -1;
//		}	//increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope);
/*		slope = 1 / slope;
	}
*/	if (thickness > 1)
	{
		hold_t_start = (x_count - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
//	if (increase_x > 1 || increase_x < -1 || increase_y > 1 || increase_x < -1)
//	{
//		increase_x *= .1;
//		increase_y *= .1;
//	}
/*	printf("in draw line\n");
	if (x <= x2 && y <= y2)
	{
		printf("incease_x >= 0 && incearese_y >= 0\n");
*//*		while (!(y_count == y2 && x_count == x2))
		{
			while (t_count <= hold_t_start + thickness)
			{
				mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
				t_count += 1;
			}
			if (increase_x != 1 && increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count += 1;
				}
			}
			if (increase_y != 1 && increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count += 1;
				}
			}
			if (increase_x != -1 && increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count -= 1;
				}
			}
			if (increase_y != -1 && increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count -= 1;
				}
			}
			if (y_count != y2)
				y_count += 1 * increase_y;
			if (x_count != x2)
				x_count += 1 * increase_x;
		}
	*/if (y_count <= y2 && x_count <= x2)
	{
	while (!(y_count >= y2 && x_count >= x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count += 1;
		}
			if (increase_x != 1 && increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count += 1;
				}
			}
			if (increase_y != 1 && increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count += 1;
				}
			}
			if (increase_x != -1 && increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count -= 1;
				}
			}
			if (increase_y != -1 && increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count -= 1;
				}
			}
		t_count = hold_t_start;
		printf("increase_y == %f\n", .1 * increase_y);
		printf("y2 == %d\n", y2);
		printf("x2 == %d\n", x2);
		printf("increase_x == %f\n", .1 * increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf(" y <= y2 x <= x2 slope == %f\n", slope);
		if (y_count != y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count != x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
		if (x_count > 400 || x_count < 0 || y_count > 400 || y_count < 0)
		{
			printf("break at error");
			break;
		}
	}
	}
	else if (y_count <= y2 && x_count >= x2)
	{
	while (!(y_count >= y2 && x_count <= x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count += 1;
		}
			if (increase_x != 1 && increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count += 1;
				}
			}
			if (increase_y != 1 && increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count += 1;
				}
			}
			if (increase_x != -1 && increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count -= 1;
				}
			}
			if (increase_y != -1 && increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count -= 1;
				}
			}
		t_count = hold_t_start;
		printf("increase_y == %f\n", .1 * increase_y);
		printf("y2 == %d\n", y2);
		printf("x2 == %d\n", x2);
		printf("increase_x == %f\n", .1 * increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
	//	printf(" y <= y2 x >= x2 slope == %f\n", slope);
		if (y_count != y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count != x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
		if (x_count > 400 || x_count < 0 || y_count > 400 || y_count < 0)
		{
			printf("break at error");
			break;
		}
	}
	}
	else if (y_count >= y2 && x_count >= x2)
	{
	while (!(y_count <= y2 && x_count <= x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count += 1;
		}
			if (increase_x != 1 && increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count += 1;
				}
			}
			if (increase_y != 1 && increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count += 1;
				}
			}
			if (increase_x != -1 && increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count -= 1;
				}
			}
			if (increase_y != -1 && increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count -= 1;
				}
			}
		t_count = hold_t_start;
		printf("increase_y == %f\n", .1 * increase_y);
		printf("y2 == %d\n", y2);
		printf("x2 == %d\n", x2);
		printf("increase_x == %f\n", .1 * increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf(" y <= y2 x >= x2 slope == %f\n", slope);
		if (y_count != y2)
			printf(" y_count == %f\n", (y_count += 1 * increase_y));
		if (x_count != x2)
			printf("x_count == %f\n", (x_count += 1 * increase_x));
		if (x_count > 400 || x_count < 0 || y_count > 400 || y_count < 0)
		{
			printf("break at error");
			break;
		}
	}
	}
	else
	{
	while (!(y_count <= y2 && x_count >= x2))
	{
		while (t_count <= hold_t_start + thickness)
		{
			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
			t_count += 1;
		}
			if (increase_x != 1 && increase_x >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count += 1;
				}
			}
			if (increase_y != 1 && increase_y >= 0)
			{
				t_count = hold_t_start + 1;
				while (t_count <= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count += 1;
				}
			}
			if (increase_x != -1 && increase_x < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_x - 1)
				{
					mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
					t_count -= 1;
				}
			}
			if (increase_y != -1 && increase_y < 0)
			{
				t_count = hold_t_start + 1;
				while (t_count >= hold_t_start + increase_y - 1)
				{
					mlx_pixel_put(mlx, win, x_count, y_count + t_count, color);
					t_count -= 1;
				}
			}
		t_count = hold_t_start;/*
		printf("increase_y == %f\n", .1 * increase_y);
		printf("y2 == %d\n", y2);
		printf("x2 == %d\n", x2);
		printf("increase_x == %f\n", .1 * increase_x);
		printf("thickness == %d\n", thickness);
		printf("hold_t_start == %f\n", hold_t_start);
		//printf("slope == %f\n", slope);*/
		if (y_count != y2)
			/*printf(" y_count == %f\n", (*/y_count += 1 * increase_y/*))*/;
		if (x_count != x2)
			/*printf("x_count == %f\n", (*/x_count += 1 * increase_x/*))*/;
		if (x_count > 400 || x_count < 0 || y_count > 400 || y_count < 0)
		{
			printf("break at error");
			break;
		}
	}
	}
		return (0);
}

int draw_thin_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness, int transparency)
{
	int t_count;
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
	if (thickness > 1)
	{
		hold_t_start = (x_count - (thickness / 2));
		t_count = hold_t_start;
	}
	else 
		hold_t_start = 0;
	if (transparency == 0)
		color_temp = 0x80000000 + color;
	else
		color_temp = color;
	calculate_increase_for_line(&increase_x, &increase_y, x, y, x2, y2);
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


//int draw_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness)
//{
//	int t_count;
//	long double x_count;
//	long double y_count;
//	long double slope;
//	long double increase_x;
//	long double hold_t_start;
//	long double b;
//
//	t_count = 0;
//	x_count = x;
//	y_count = y;
//	slope = 0;
//	if ((x2 - x) == 0)
//	{
//		slope = 0;
//	//	b = 0;
////		b = y - slope * x;
//		increase_x = 0;
//	//	increase_y = 1;
//	}
//	else if ((y2 - y) == 0)
//	{
//		slope = 0;
////		b = y - slope * x;
//		increase_x = 1;
//	//	increase_y = 0;
//	}
//	else
//	{
//		slope = fmod((y2 - y), ( x2 - x));
//		if (slope == 0)
//		{
//			if (increase_y < 0 && (y2 - y) > 0)
//			{
//				increase_y *= -1;
//				increase_x *= -1;
//			}
//			if (increase_y > 0 && (y2 - y) < 0 && (x2 - x) < 0)
//			{
//				increase_y *= -1;
//				increase_x *= -1;
//			}
		//		increase_y = (y2 - y) / (x2 - x);
//		}
//	/*	else */if (slope != 0)
//		{
//			if (slope >= 0)
//				increase_x = /*fmod((y2 - y), (x2 - x));*//* (x2 - x) **/ (1 / slope);
//			else	
//				increase_x = /*fmod((y2 - y), (x2 - x));*//* (x2 - x) * */(1 / slope) * -1;
//		}	//increase_x = /*fmod((y2 - y), (x2 - x));*/ (x2 - x) * (1 / slope);
///		slope = 1 / slope;
//		slope = (y2 - y) / (x2 - x);
//	}
//		b = y - slope * x;
//	if (thickness > 1)
//	{
//		hold_t_start = (x_count - (thickness / 2));
//		t_count = hold_t_start;
//	}
//	else 
//	{
//		hold_t_start = 0;
//	}
//	while (!(y_count == y2 && x_count == x2))
//	{
//	
//		while (t_count <= hold_t_start + thickness)
//		{
//			mlx_pixel_put(mlx, win, x_count + t_count, y_count, color);
//			t_count += 1;
//		}
//		t_count = hold_t_start;
//		printf("increase_y == %f\n", .1 * increase_y);
//		printf("y2 == %d\n", y2);
//		printf("x2 == %d\n", x2);
//		printf("increase_x == %f\n", .1 * increase_x);
//		printf("thickness == %d\n", thickness);
//		printf("(y2 - y) = %d\n", (y2 - y));
//		printf("(x2 - x) = %d\n", (x2 - x));
//		if ((x2 - x) != 0)
//			printf("(y2 - y) / (x2 - x) = %Lf\n", (long double)((y2 - y) / (x2 - x)));
//		printf("hold_t_start == %Lf\n", hold_t_start);
//		printf("slope == %Lf\n", slope);
//		printf("b == %Lf\n", b);
///		if ((x2 - x) == 0)
//			y_count += 1;
//		else
//		{
//			if ((x2 - x) < 0)
//				x_count -= 1;
//			else
//				x_count += 1;
//			y_count = y + (y2 - y) * (x_count - x)/(x2 - x);
//			b = y - slope * x;
//			if ((x2 - x) == 0 || (y2 - y) == 0)
//				y_count = slope * x_count + b;
//			else
//				y_count = ((y2 - y) / (x2 - x)) * x_count + b;
//		}
//		printf("y_count = %Lf\n", y_count);
//		printf("x_count = %Lf\n", x_count);
//		if (x_count > 400 || y_count > 400 || x_count < 0 || y_count < 0)
//			break;
		//	if (y_count != y2)
	//		printf(" y_count == %f\n", (y_count += 1 * increase_y));
	//	if (x_count != x2)
	//		printf("x_count == %f\n", (x_count += 1 * increase_x));
//	}
//	return (0);
//}

int clear_line(void	*mlx, void *win, int x, int y, int x2, int y2, int thickness)
{
	draw_line(mlx, win, x, y, x2, y2, 0x00000000, thickness, 0);
 	return(1);
}

void	playing_with_pixels(void *mlx)
{
	void *win;
	int x;
	int y;
	int x2;
	int y2;
	double r;
	double start;
	double end;
	int thickness;
	int transparency;
	int color;

	win = mlx_new_window(mlx, 400, 400, "mlx test");
	x = 300;
	y = 100;
	x2 = 350;
	y2 = 400;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_line_angled(mlx, win, x, y, x2, y2, color, thickness);
	//numbers are location in window  two 00 are transparance next is red ff, green, blue ff
	transparency = 0;
	x = 200;
	y = 200;
	x2 = 400;
	y2 = 400;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 200;
	y = 200;
	r = 100;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_circle(mlx, win, r, x, y, color, thickness);
	x = 200;
	y = 200;
	r = 99.9;
	// 65d3d8 the color of teal i like.
	color = 0x00C0C0C0;
	fill_circle(mlx, win, r, x, y, color);
	printf("filled the circle");
	x = 200;
	y = 0;
	x2 = 200;
	y2 = 400;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 0;
	y = 200;
	x2 = 400;
	y2 = 200;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 200;
	y = 200;
	r = 50;
	start = 0;
	end = 90;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x00FFD700;
	draw_partial_circle(mlx, win, r, start, end, x, y, color, thickness);
	x = 200;
	y = 200;
	x2 = 400;
	y2 = 0;
	thickness = 0;
	color = 0x002e7a38;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 200;
	y = 200;
	//dose not work with 0 and 400; || negativees in genral
	x2 = 0;
	y2 = 400;
	thickness = 0;
	color = 0x00FFD700;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 200;
	y = 200;
	x2 = 0;
	y2 = 0;
	thickness = 0;
	color = 0x00C0C0C0;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 0;
	y = 0;
	x2 = 200;
	y2 = 100;
	thickness= 0;
	color = 0x004168e1;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 0;
	y = 0;
	x2 = 200;
	y2 = 50;
	thickness= 0;
	color = 0x004168e1;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);

	x = 200;
	y = 50;
	x2 = 0;
	y2 = 100;
	color = 0x009b0716;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 50;
	y = 200;
	x2 = 0;
	y2 = 100;
	thickness = 0;
	// 65d3d8 the color of teal i like.
	color = 0x0065d3d8;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 0;
	y = 235;
	x2 = 0;
	y2 = 400;
	thickness = 0;
	color = 0x00FFD700;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 50;
	y = 0;
	x2 = 400;
	y2 = 0;
	thickness = 0;
	color = 0x00FFD700;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 36;
	y = 235;
	x2 = 50;
	y2 = 244;
	thickness = 0;
	color = 0x00C0C0C0;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 50;
	y = 235;
	x2 = 36;
	y2 = 344;
	thickness = 0;
	color = 0x00C0C0C0;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 36;
	y = 235;
	x2 = 50;
	y2 = 344;
	thickness = 0;
	color = 0x00C0C0C0;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 50;
	y = 235;
	x2 = 36;
	y2 = 244;
	thickness = 0;
	color = 0x00C0C0C0;
	draw_line(mlx, win, x, y, x2, y2, color, thickness, transparency);
	x = 350;
	y = 2750;
	x2 = 400;
	y2 = 300;
	thickness = 0;
	color = 0x002e7a38;
	draw_rectangle(mlx, win, x, y, x2, y2, color);
	mlx_key_hook(win, if_hook, mlx);
	//clear_line(mlx, win, x, y, x2, y2, thickness);
	//	mlx_pixel_put(mlx, win, 20, 20, 0x00FFFFFF);
//	mlx_key_hook(win, done, mlx);
	mlx_loop(mlx);
}
