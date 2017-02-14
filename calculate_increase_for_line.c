/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caculate_increase_for_line.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:11:07 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

void calculate_increase_for_line(double *increase_x, double *increase_y, int x, int y, int x2, int y2)
{
	double slope;

	slope = 0;
	if ((x2 - x) == 0)
	{
		*increase_x = 0;
		*increase_y = 1;
	}
	else if ((y2 - y) == 0)
	{
		*increase_x = 1;
		*increase_y = 0;
	}
	else
	{
		slope = fmod((y2 - y), ( x2 - x));
		if (slope == 0)
		{
			*increase_y = (y2 - y) / (x2 - x);
			if (*increase_y < 0 && (y2 - y) > 0)
			{
				*increase_y *= -1;
				*increase_x *= -1;
			}
			if (*increase_y > 0 && (y2 - y) < 0 && (x2 - x) < 0)
			{
				*increase_y *= -1;
				*increase_x *= -1;
			}
		}
		else if (slope != 0)
		{
			if (slope >= 0)
				*increase_x = (x2 - x) * (1 / slope);
			else	
				*increase_x = (x2 - x) * (1 / slope) * -1;
		}
		slope = 1 / slope;
	}
}
