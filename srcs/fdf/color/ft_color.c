/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 06:37:40 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 06:37:45 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

double	percent(int start, int end, int current)
{
	double	placement;
	double	distance;

	placement = current - start;
	distance = end - start;
	return ((distance == 0) ? 1.0 : (placement / distance));
}

int		get_light(int start, int end, double percentage)
{
	return ((int)((1 - percentage) * start + percentage * end));
}

int		get_color(t_dot start, t_dot end, t_dot current)
{
	int		red;
	int		green;
	int		blue;
	double	percentage;

	if (mod(start.y - end.y) < mod(start.x - end.x))
		percentage = percent(start.x, end.x, current.x);
	else
		percentage = percent(start.y, end.y, current.y);
	red = get_light((start.color >> 16) & 0xFF,
			(end.color >> 16) & 0xFF, percentage);
	green = get_light((start.color >> 8) & 0xFF,
			(end.color >> 8) & 0xFF, percentage);
	blue = get_light(start.color & 0xFF, end.color & 0xFF, percentage);
	return ((red << 16) | (green << 8) | blue);
}

void	put_img_pixel(t_point_l *st, t_dot p1, t_dot p2, t_dot c1)
{
	char	*b;
	int		r;

	if (p1.z < p2.z)
		r = get_color(p1, p2, c1);
	else
		r = get_color(p2, p1, c1);
	b = st->img_data + (int)((int)c1.x * 4 + 4 *
			(st->wind->win_size * (int)c1.y));
	*b = (char)((r >> 16) & 0xFF);
	b++;
	*b = (char)((r >> 8) & 0xFF);
	b++;
	*b = (char)(r & 0xFF);
	b++;
	*b = 0;
}

int		get_z_color(int start, int end, int corect)
{
	int		red;
	int		green;
	int		blue;
	double	perc;

	perc = percent(start, end, corect);
	red = get_light((0xFF0000 >> 16) & 0xFF, (0x00FF00 >> 16) & 0xFF, perc);
	green = get_light((0xFF0000 >> 8) & 0xFF, (0x00FF00 >> 8) & 0xFF, perc);
	blue = get_light(0xFF0000 & 0xFF, 0x00FF00 & 0xFF, perc);
	return ((red << 16) | (green << 8) | blue);
}
