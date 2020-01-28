/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 19:39:40 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/13 19:39:43 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int ch)
{
	char	*new;
	char	k;

	k = (char)ch;
	new = ft_strchr(str, 0);
	if (k == '\0')
		return (new);
	while (new != str)
	{
		new--;
		if (*new == k)
			return (new);
	}
	return (NULL);
}
