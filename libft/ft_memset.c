/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 15:50:47 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/08 15:50:57 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *str, int nb, size_t size)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)str;
	while (i < size)
	{
		new[i] = nb;
		i++;
	}
	return (str);
}
