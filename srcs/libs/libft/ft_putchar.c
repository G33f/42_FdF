/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:09:36 by wpoudre           #+#    #+#             */
/*   Updated: 2019/09/16 18:09:38 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../header/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}