/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:45:26 by wpoudre           #+#    #+#             */
/*   Updated: 2019/11/04 15:45:33 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double		ft_pow(double num, int pow)
{
	double	res;
	int		n;

	res = 1;
	if (!pow || pow == 0)
		return (1);
	if (pow < 0)
	{
		n = -1;
		pow *= -1;
	}
	else
		n = 1;
	while (pow != 0)
	{
		res *= num;
		pow--;
	}
	if (n < 0)
		return (1 / res);
	else
		return (res);
}
