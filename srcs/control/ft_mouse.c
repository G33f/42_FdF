/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mouse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 06:18:17 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 06:18:20 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FdF.h"

int	mouse_release(int kay, int x, int y, t_point_l *st)
{
	st->kay += kay;
	return (0);
}

int	mouse_move(int x, int y, t_point_l *st)
{
	mlx_hook(st->wind->win, 5, 0, mouse_release, st);
	if (st->kay > 0)
		return (0);
	if ((float)x > st->x)
		qn_rot(st, new_qn(1, 0, 1, 0), 0.02);
	if ((float)x < st->x)
		qn_rot(st, new_qn(1, 0, 1, 0), -0.02);
	if ((float)y > st->y)
		qn_rot(st, new_qn(1, 1, 0, 0), 0.02);
	if ((float)y < st->y)
		qn_rot(st, new_qn(1, 1, 0, 0), -0.02);
	st->x = (float)x;
	st->y = (float)y;
	replace(st);
	return (0);
}

int	mouse_press(int kay, int x, int y, t_point_l *st)
{
	if (kay == 1)
		mlx_hook(st->wind->win, 6, 0, mouse_move, st);
	if (kay == 4)
	{
		st->zoom += 1;
		replace(st);
		return (0);
	}
	if (kay == 5 && st->zoom > 1)
	{
		st->zoom -= 1;
		replace(st);
		return (0);
	}
	st->kay = 0;
	return (0);
}
