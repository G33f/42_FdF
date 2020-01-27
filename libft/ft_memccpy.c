/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:20:45 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 16:20:48 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *source, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	m;
	size_t			i;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)source;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
		if (str2[i - 1] == m)
			return (str1 + i);
	}
	return (NULL);
}
