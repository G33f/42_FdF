/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 20:10:54 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/13 20:10:56 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *str1, const char *str2)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)str1;
	if (*str2 == '\0')
		return ((char *)str1);
	while (*str1)
	{
		while (str2[i] == str1[i])
		{
			i++;
			if (str2[i] == '\0')
			{
				ret = (char *)str1;
				return (ret);
			}
		}
		str1++;
		i = 0;
	}
	return (NULL);
}
