/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:45:57 by wpoudre           #+#    #+#             */
/*   Updated: 2019/11/04 15:46:00 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

double		ft_sqrt(double num)
{
	double	r;
	double	q;
	int		i;

	q = 0;
	r = 1;
	i = 0;
	if (!num)
		return (0);
	while (i < 15)
	{
		q = 1 / ft_pow(10, i);
		while (((r + q) * (r + q)) < num)
			r += q;
		i++;
	}
	return (r);
}
