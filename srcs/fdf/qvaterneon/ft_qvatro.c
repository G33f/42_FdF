/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qvatro.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 05:59:48 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 05:59:50 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_qn	*qn_min(t_qn *s)
{
	t_qn	*qn;

	qn = new_qn(s->w, s->x, s->y, s->z);
	if (qn->x != 0)
		qn->x *= -1;
	if (qn->y != 0)
		qn->y *= -1;
	if (qn->z != 0)
		qn->z *= -1;
	return (qn);
}

t_qn	*qn_sum(t_qn *q1, t_qn *q2)
{
	t_qn	*res;

	res = new_qn(0, 0, 0, 0);
	res->w = q1->w * q2->w - (q1->x * q2->x + q1->y * q2->y + q1->z * q2->z);
	res->x = q1->w * q2->x + q1->x * q2->w + q1->y * q2->z - q1->z * q2->y;
	res->y = q1->w * q2->y + q1->y * q2->w + q1->z * q2->x - q1->x * q2->z;
	res->z = q1->w * q2->z + q1->z * q2->w + q1->x * q2->y - q1->y * q2->x;
	return (res);
}

void	magn(t_qn *st)
{
	int	magn;

	magn = sqrt(pow(st->x, 2) + pow(st->y, 2) + pow(st->z, 2) + pow(st->w, 2));
	st->x = st->x / magn;
	st->y = st->y / magn;
	st->z = st->z / magn;
	st->w = st->w / magn;
}

t_qn	*new_qn(float w, float x, float y, float z)
{
	t_qn	*qn;

	qn = ft_memalloc(sizeof(t_qn));
	qn->w = w;
	qn->x = x;
	qn->y = y;
	qn->z = z;
	return (qn);
}
