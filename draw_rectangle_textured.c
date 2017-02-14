/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_rectangle_textured.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:36:20 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 17:57:38 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "playing_with_pixels.h"

int draw_rectangle_lined(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int flip;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_switch = 0;
	flip = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
				if (x_count % 2 == 0)
				{
					if (y_count % 2 == 1 && flip == 0)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
				else
						texture_switch = 0;
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
			if (y <= y2)
				y_count++;
			else
				y_count--;
			if (flip <= 3)
				flip++;
			else
				flip = 0;
		}
		if (x <= x2)
			x_count++;
		else
			x_count--;
	}
	return (0);
}

int draw_rectangle_pixulated(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int texture_color2;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_color2 = 0x50000000 + color;
	texture_switch = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
				if (x_count % 2 == 0)
				{
					if (y_count % 2 == 1)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
				else
						texture_switch = 0;
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
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

int draw_rectangle_gauzy(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int flip;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_switch = 0;
	flip = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
				if (x_count % 2 == 0)
				{
					if (y_count % 2 == 1 && flip == 0)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
				else
				{
					if (y_count % 2 == 1 && flip >= 1)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
			if (y <= y2)
				y_count++;
			else
				y_count--;
			if (flip <= 1)
				flip++;
			else
				flip = 0;
		}
		if (x <= x2)
			x_count++;
		else
			x_count--;
	}
	return (0);
}

int draw_rectangle_lined_gauz(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int flip;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_switch = 0;
	flip = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
				if (x_count % 2 == 0)
				{
					if (y_count % 2 == 1 && flip == 0)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
				else
				{
					if (y_count % 2 == 1 && flip == 1)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
			if (y <= y2)
				y_count++;
			else
				y_count--;
			if (flip <= 1)
				flip++;
			else
				flip = 0;
		}
		if (x <= x2)
			x_count++;
		else
			x_count--;
	}
	return (0);
}

int draw_rectangle_sold_thin_lined(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int texture_color2;
	int flip;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_color2 = 0x50000000 + color;
	texture_switch = 0;
	flip = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
				//texture_switch = 1;
				if (x_count % 2 == 0)
				{
					if (y_count % 2 == 1 && flip == 0)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
				else
				{
					if (y_count % 2 == 1 && flip == 0)
						texture_switch = 1;
					else
						texture_switch = 0;
				}
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
			else if (texture_switch == 2)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color2);
				texture_switch = 0;
			}

			if (y <= y2)
				y_count++;
			else
				y_count--;
			if (flip <= 1)
				flip++;
			else
				flip = 0;
		}
		if (x <= x2)
			x_count++;
		else
			x_count--;
	}
	return (0);
}

int draw_rectangle_textured(void *mlx, void *win, int x, int y, int x2, int y2, int color)
{
	int x_count;
	int y_count;
	int texture_switch;
	int texture_color1;
	int texture_color2;
	int flip;

	x_count = x;
	texture_color1 = 0x80000000 + color;
	texture_color2 = 0x50000000 + color;
	texture_switch = 0;
	flip = 0;
	while (x_count != x2)
	{
		y_count = y;
		while (y_count != y2)
		{
			printf("placing: y = %d x = %d\n", y_count, x_count);
			if (texture_switch == 0)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, color);	
			if (x_count % 2 == 0)
				{
					if (flip == 0)
					{
						if (x_count % 2 == 0)
						texture_switch = 1;
						else
						texture_switch = 2;
					}
					else
						texture_switch = 0;
				}
				else
				{
					if (flip == 0)
					{
						if (x_count % 2 == 1)
						texture_switch = 1;
						else
						texture_switch = 2;
					}
					else
						texture_switch = 0;
				}
			}
			else if (texture_switch == 2)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color1);
				texture_switch = 0;
			}
			else if (texture_switch == 1)
			{
				mlx_pixel_put(mlx, win, x_count, y_count, texture_color2);
				texture_switch = 0;
			}

			if (y <= y2)
				y_count += 1;
			else
				y_count -= 1;
			if (flip <= 1)
				flip++;
			else
				flip = 0;
		}
		if (x <= x2)
			x_count += 1;
		else
			x_count -= 1;
	}
	return (0);
}
