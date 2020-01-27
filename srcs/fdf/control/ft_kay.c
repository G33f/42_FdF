/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kay.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 06:18:07 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 06:18:10 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	kay_prass_1(int kay, t_point_l *st)
{
	if (kay == 14)
		qn_rot(st, new_qn(1, 0, 0, 1), 0.05);
	if (kay == 12)
		qn_rot(st, new_qn(1, 0, 0, 1), -0.05);
	if (kay == 88)
		qn_rot(st, new_qn(1, 0, 1, 0), 0.05);
	if (kay == 86)
		qn_rot(st, new_qn(1, 0, 1, 0), -0.05);
	if (kay == 91)
		qn_rot(st, new_qn(1, 1, 0, 0), 0.05);
	if (kay == 84)
		qn_rot(st, new_qn(1, 1, 0, 0), -0.05);
	if (kay == 53)
		exit(0);
	if (kay == 126)
		st->y -= 4;
	if (kay == 125)
		st->y += 4;
	if (kay == 123)
		st->x -= 4;
	if (kay == 124)
		st->x += 4;
	replace(st);
	return (kay);
}

int	kay_prass_2(int kay, t_point_l *st)
{
	if (kay == 92)
		qn_rot(st, new_qn(1, 1, 1, 0), 0.05);
	if (kay == 83)
		qn_rot(st, new_qn(1, 1, 1, 0), -0.05);
	if (kay == 89)
		qn_rot_rev(st, new_qn(1, 1, 1, 0), 0.05);
	if (kay == 85)
		qn_rot_rev(st, new_qn(1, 1, 1, 0), -0.05);
	if (kay == 78)
		st->zoom -= 1;
	if (kay == 69)
		st->zoom += 1;
	replace(st);
	return (kay);
}
