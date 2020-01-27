/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:46:06 by wpoudre           #+#    #+#             */
/*   Updated: 2019/11/12 20:46:09 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../header/libft.h"

void	ft_matdel(void **as, int i)
{
	if (!as || !*as)
		return ;
	while(i)
	{
		ft_memdel(&as[i]);
		as[i] = NULL;
		i--;
	}
	ft_memdel(as);
	as = NULL;
}
