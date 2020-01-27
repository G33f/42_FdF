/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 05:41:53 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 05:41:57 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	qn_rot(t_point_l *st, t_qn *qn, float agl)
{
	qn->w *= cos(agl);
	qn->x *= sin(agl);
	qn->y *= sin(agl);
	qn->z *= sin(agl);
	st->rot = qn_sum(st->rot, qn);
}

void	qn_rot_rev(t_point_l *st, t_qn *qn, float agl)
{
	qn->w *= cos(agl);
	qn->x *= sin(agl);
	qn->y *= sin(-agl);
	qn->z *= sin(agl);
	st->rot = qn_sum(st->rot, qn);
}

t_qn	*rotate_e(t_qn *vec, t_point_l *st)
{
	t_qn	*rev_rot;

	vec = qn_sum(st->rot, vec);
	rev_rot = qn_min(st->rot);
	magn(rev_rot);
	vec = qn_sum(vec, rev_rot);
	return (vec);
}

void	rot(t_dot *p1, t_dot *p2, t_point_l *st)
{
	t_qn	*vec;
	t_qn	*vec1;

	vec = new_qn(0, p1->x, p1->y, p1->z);
	vec = rotate_e(vec, st);
	p1->x = vec->x;
	p1->y = vec->y;
	p1->z = vec->z;
	vec1 = new_qn(0, p2->x, p2->y, p2->z);
	vec1 = rotate_e(vec1, st);
	p2->x = vec1->x;
	p2->y = vec1->y;
	p2->z = vec1->z;
}
