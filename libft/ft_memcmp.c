/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:20:18 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/18 19:22:48 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	if ((!arr1 && !arr2) || !n)
		return (0);
	i = 0;
	s1 = (unsigned char *)arr1;
	s2 = (unsigned char *)arr2;
	while (s1[i] == s2[i] && i < n)
	{
		i++;
		if (i == n)
			return (0);
	}
	return (s1[i] - s2[i]);
}
