/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:41:44 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 01:41:49 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ready_1(t_dot *p1, t_dot *p2, t_point_l *st)
{
	if (p2->x >= p1->x)
	{
		if (p2->y >= p1->y)
			drow_x(p1, p2, st);
		else
			drow_m_x(p1, p2, st);
	}
	else
	{
		if (p2->y >= p1->y)
			drow_m_x(p2, p1, st);
		else
			drow_x(p2, p1, st);
	}
}

void	ready_2(t_dot *p1, t_dot *p2, t_point_l *st)
{
	if (p2->x >= p1->x)
	{
		if (p2->y >= p1->y)
			drow_y(p1, p2, st);
		else
			drow_m_y(p1, p2, st);
	}
	else
	{
		if (p2->y > p1->y)
			drow_m_y(p2, p1, st);
		else
			drow_y(p2, p1, st);
	}
}

void	ready(t_dot *p1, t_dot *p2, t_point_l *st)
{
	if (mod(p2->y - p1->y) < mod(p2->x - p1->x))
		ready_1(p1, p2, st);
	else
		ready_2(p1, p2, st);
}

void	ft_drow_line(t_dot *pl1, t_dot *pl2, t_point_l *st)
{
	t_dot	p1;
	t_dot	p2;

	p1.x = pl1->x;
	p1.y = pl1->y;
	p2.x = pl2->x;
	p2.y = pl2->y;
	p1.z = st->z_list[(int)p1.y][(int)p1.x];
	p2.z = st->z_list[(int)p2.y][(int)p2.x];
	if (mod(p1.z) > 0.0 || mod(p2.z) > 0.0)
		st->color = 10;
	back_sh(&p1, &p2, st);
	zoom(&p1, &p2, st);
	rot(&p1, &p2, st);
	shift(&p1, &p2, st);
	if (p2.x < 0 || p2.y < 0 || p1.x < 0 || p1.y < 0
	|| p2.x > st->wind->win_size || p1.x > st->wind->win_size
	|| p2.y > st->wind->win_size || p1.y > st->wind->win_size)
		return ;
	ready(&p1, &p2, st);
}

void	draw(t_point_l *st)
{
	t_dot	p1;
	t_dot	p2;

	p1.y = 0;
	while (p1.y < st->y_short)
	{
		p1.x = 0;
		while (p1.x < st->x_leng)
		{
			if (p1.x < st->x_leng - 1)
			{
				p2.x = p1.x + 1;
				p2.y = p1.y;
				ft_drow_line(&p1, &p2, st);
			}
			if (p1.y < st->y_short - 1)
			{
				p2.x = p1.x;
				p2.y = p1.y + 1;
				ft_drow_line(&p1, &p2, st);
			}
			p1.x++;
		}
		p1.y++;
	}
}
