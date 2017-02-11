/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 11:45:06 by jcone             #+#    #+#             */
/*   Updated: 2017/02/09 13:03:05 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "minilibx_macos/mlx.h"
# include "playing_with_pixels.h"

int main(void)
{
//	void *win;
	void *mlx;

	mlx = mlx_init();
	playing_with_pixels(mlx);
	//	win = mlx_new_window(mlx, 400, 400, "mlx test");
	//numbers are location in window  two 00 are transparance next is red ff, green, blue ff
//	mlx_pixel_put(mlx, win, 20, 20, 0x00FFFFFF);
//	mlx_loop(mlx);
}
