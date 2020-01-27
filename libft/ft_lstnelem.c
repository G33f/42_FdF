/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnelem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:06:28 by wpoudre           #+#    #+#             */
/*   Updated: 2019/11/04 16:06:31 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_lstnelem(t_list *lst, size_t s)
{
	size_t r;

	r = 0;
	while (s > (r - 1))
	{
		if (lst->next)
			return (NULL);
		lst = lst->next;
		r++;
	}
	return (lst);
}
