/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:27:22 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/13 23:27:26 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int								ft_atoi(const char *str)
{
	static unsigned long		i;
	unsigned long long			num;
	int							mod;

	i = 0;
	num = 0;
	mod = 1;
	while (*(str + i) == '\n' || *(str + i) == '\t'  \
	|| *(str + i) == '\r' || *(str + i) == '\v' \
	|| *(str + i) == '\f' || *(str + i) == ' ')
		i++;
	if (*(str + i) == '-')
		mod = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i) && *(str + i) >= '0' && *(str + i) <= '9')
	{
		num = (unsigned long long)(num * 10 + (*(str + i++) - '0'));
		if (num > (long long)MAX_LONG_LONG && mod == 1)
			return (-1);
		if (num > (long long)MAX_LONG_LONG && mod == -1)
			return (0);
	}
	return ((int)(num * mod));
}
