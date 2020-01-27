/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:20:16 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 01:20:21 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	t_point_l	*data;

	if (argc != 2)
		return (0);
	data = inicalizaciya();
	ft_starter(argv[1], data);
	draw(data);
	mlx_clear_window(data->mlx, data->wind->win);
	mlx_hook(data->wind->win, 2, 0, kay_prass_1, data);
	mlx_hook(data->wind->win, 3, 0, kay_prass_2, data);
	mlx_hook(data->wind->win, 4, 0, mouse_press, data);
	mlx_put_image_to_window(data->mlx, data->wind->win, data->img_ptr, 0, 0);
	mlx_loop(data->mlx);
	return (0);
}
