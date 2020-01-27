/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shift.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 06:33:30 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 06:33:33 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			mod(int r)
{
	return ((r < 0) ? (-r) : (r));
}

t_point_l	*inicalizaciya(void)
{
	t_point_l	*st;
	t_wind		*wind;

	if (!(st = (t_point_l *)ft_memalloc(sizeof(t_point_l))))
		exit(0);
	if (!(wind = ft_memalloc(sizeof(t_wind))))
		exit(0);
	st->rot = new_qn(1, 0, 0, 0);
	st->wind = wind;
	wind->win_size = 1500;
	st->mlx = mlx_init();
	st->x = st->x_leng / 2;
	st->y = st->y_short / 2;
	st->wind->iso = 1;
	if (st->wind->iso == 1)
	{
		qn_rot(st, new_qn(1, 1, 0, 0), 0.523599);
		qn_rot(st, new_qn(1, 0, 0, 1), -0.523599);
	}
	wind->win = mlx_new_window(st->mlx, wind->win_size, wind->win_size, "FDF");
	st->img_ptr = mlx_new_image(st->mlx, st->wind->win_size,
			st->wind->win_size);
	st->img_data = mlx_get_data_addr(st->img_ptr, &st->bpp,
			&st->size_line, &st->endian);
	return (st);
}

void		zoom(t_dot *p1, t_dot *p2, t_point_l *st)
{
	p1->x *= st->zoom;
	p1->y *= st->zoom;
	p1->z *= st->zoom;
	p2->x *= st->zoom;
	p2->y *= st->zoom;
	p2->z *= st->zoom;
}

void		back_sh(t_dot *p1, t_dot *p2, t_point_l *st)
{
	p1->x -= st->x_leng / 2;
	p1->y -= st->y_short / 2;
	p2->x -= st->x_leng / 2;
	p2->y -= st->y_short / 2;
}

void		shift(t_dot *p1, t_dot *p2, t_point_l *st)
{
	p1->x += st->wind->win_size / 2 + (st->x_leng / 2);
	p1->y += st->wind->win_size / 2 + (st->y_short / 2);
	p2->x += st->wind->win_size / 2 + (st->x_leng / 2);
	p2->y += st->wind->win_size / 2 + (st->y_short / 2);
}
