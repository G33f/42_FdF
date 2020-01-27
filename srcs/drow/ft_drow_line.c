/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drow_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:41:56 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 01:41:59 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FdF.h"

void	drow_x(t_dot *p1, t_dot *p2, t_point_l *st)
{
	int	dx;
	int	dy;
	int	p;

	dx = p2->x - p1->x;
	dy = p2->y - p1->y;
	p = 2 * dy - dx;
	while (p1->x < p2->x)
	{
		if (p >= 0)
		{
			put_img_pixel(st, p1->x, p1->y);
			p1->y = p1->y + 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			put_img_pixel(st, p1->x, p1->y);
			p = p + 2 * dy;
		}
		p1->x = p1->x + 1;
	}
}

void	drow_m_x(t_dot *p1, t_dot *p2, t_point_l *st)
{
	int dx;
	int	dy;
	int	p;

	dx = p2->x - p1->x;
	dy = p1->y - p2->y;
	p = 2 * dy - dx;
	while (p1->x < p2->x)
	{
		if (p >= 0)
		{
			put_img_pixel(st, p1->x, p1->y);
			p1->y = p1->y - 1;
			p = p + 2 * dy - 2 * dx;
		}
		else
		{
			put_img_pixel(st, p1->x, p1->y);
			p = p + 2 * dy;
		}
		p1->x = p1->x + 1;
	}
}

void	drow_y(t_dot *p1, t_dot *p2, t_point_l *st)
{
	int dx;
	int	dy;
	int	p;

	dx = p2->x - p1->x;
	dy = p2->y - p1->y;
	p = 2 * dx - dy;
	while (p1->y < p2->y)
	{
		if (p >= 0)
		{
			put_img_pixel(st, p1->x, p1->y);
			p1->x = p1->x + 1;
			p = p + 2 * dx - 2 * dy;
		}
		else
		{
			put_img_pixel(st, p1->x, p1->y);
			p = p + 2 * dx;
		}
		p1->y = p1->y + 1;
	}
}

void	drow_m_y(t_dot *p1, t_dot *p2, t_point_l *st)
{
	int dx;
	int	dy;
	int	p;

	dx = MOD(p2->x - p1->x);
	dy = MOD(p2->y - p1->y);
	p = 2 * dx - dy;
	while (p1->y > p2->y)
	{
		if (p >= 0)
		{
			put_img_pixel(st, p1->x, p1->y);
			p1->x = p1->x + 1;
			p = p + 2 * dx - 2 * dy;
		}
		else
		{
			put_img_pixel(st, p1->x, p1->y);
			p = p + 2 * dx;
		}
		p1->y = p1->y - 1;
	}
}
