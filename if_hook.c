/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_hook.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcone <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 12:56:04 by jcone             #+#    #+#             */
/*   Updated: 2017/02/13 16:55:10 by jcone            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "playing_with_pixels.h"

int if_hook(int keycode/*, void *param*/)
{
	printf("they code is: %d", keycode);
//	if (keycode == 49)
//		return (1);
//	else
		exit(0);
	return (0);
}
