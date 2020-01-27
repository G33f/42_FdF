/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:07:31 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/13 18:07:34 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strchr(const char *str, int ch)
{
	unsigned char	k;
	char			*new;

	k = (unsigned char)ch;
	new = (char *)str;
	while (*new)
	{
		if (*new == ch)
			return (new);
		else
			new++;
	}
	if (k == '\0')
		return (new);
	else
		return (NULL);
}
