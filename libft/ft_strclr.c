/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 09:29:29 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/14 09:29:33 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_bzero(s, ft_strlen(s));
}
