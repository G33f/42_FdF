/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:04:38 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 18:04:41 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ret;
	size_t			i;

	i = 0;
	str = (unsigned char *)arr;
	ret = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ret)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
