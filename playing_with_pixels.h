/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playing_with_pixels.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:52:54 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:52:42 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PLAYING_WITH_PIXELS_H
# define PLAYING_WITH_PIXELS_H

# include <math.h>
# include <stdio.h>
# include <stdlib.h>
# include "minilibx_macos/mlx.h"

void	playing_with_pixels(void *mlx);
int draw_line(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness, int transparency);
void calculate_increase_for_line(double *increase_x, double *increase_y, int x, int y, int x2, int y2);
void place_point_for_line(double hold_t_start, double *x_count, double * y_count, int color, void *mlx, void *win, double increase_x, double increase_y, int thickness, int x2, int y2);
int draw_line_angled(void *mlx, void *win, int x, int y, int x2, int y2, int color, int thickness);
int     draw_circle(void *mlx, void *win, double r, int x_center, int y_center, int color, int thickness);
int     fill_circle(void *mlx, void *win, double r, int x_center, int y_center, int color);
int     draw_partial_circle(void *mlx, void *win, double r, double start, double end, int x_center, int y_center, int color, int thickness);
int draw_rectangle(void *mlx, void *win, int x, int y, int x2, int y2, int color);
 int if_hook(int keycode);
#endif
