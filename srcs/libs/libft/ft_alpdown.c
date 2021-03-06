/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alpdown.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 15:46:26 by wpoudre           #+#    #+#             */
/*   Updated: 2019/11/04 15:46:31 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../header/libft.h"

char	*ft_alpdown(char *str)
{
	int	i;

	i = ft_strlen(str);
	if (i == 0)
		return (0);
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
		i++;
	}
	return (str);
}
