/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 11:13:57 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/15 11:43:27 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strequ(char const *s1, char const *s2)
{
	char	*new1;
	char	*new2;

	if (s1 && s2)
	{
		new1 = (char *)s1;
		new2 = (char *)s2;
		if (ft_strcmp(new1, new2) == 0)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
