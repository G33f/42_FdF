/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 06:37:40 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 06:37:45 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		color(char *b1, t_point_l *st)
{
	if (st->color == 1)
	{
		*b1++ = (char)0;
		*b1++ = (char)255;
		*b1++ = (char)0;
	}
	else
	{
		*b1++ = (char)255;
		*b1++ = (char)255;
		*b1++ = (char)255;
	}
	st->color = 0;
}

void		put_img_pixel(t_point_l *data, int x, int y)
{
	char	*b;

	b = data->img_data + (int)(x * 4 + 4 * (data->wind->win_size * y));
	color(b, data);
}
