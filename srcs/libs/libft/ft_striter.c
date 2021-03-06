/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:38:15 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/14 09:38:19 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../header/libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int	i;

	i = 0;
	if (s && f)
		while (*(s + i))
			f(s + i++);
}
