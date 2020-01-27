/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:45:32 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/14 09:45:36 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../header/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s && f)
		while (*(s + i))
		{
			f(i, s + i);
			i++;
		}
}
