/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:27:33 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/10 21:27:36 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	if (n <= 0)
		return (str1);
	while (i != n)
	{
		if (str2[i] == '\0')
		{
			while (i != n)
			{
				str1[i] = '\0';
				i++;
			}
			return (str1);
		}
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
