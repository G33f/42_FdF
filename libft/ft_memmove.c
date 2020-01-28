/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:37:52 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/11 17:37:55 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				t;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)source;
	t = 0;
	while (n--)
	{
		if (s2 < s1)
			s1[n] = s2[n];
		else if (s2 > s1)
		{
			s1[t] = s2[t];
			t++;
		}
	}
	return (s1);
}
