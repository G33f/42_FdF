/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:32:09 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 01:32:12 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		z_count(t_point_l *st)
{
	int			i;
	int			j;

	i = 0;
	while (st->y_short > ++i)
	{
		j = 0;
		while (st->x_leng > ++j)
		{
			if (st->z_list[i][j] < st->z_min)
				st->z_min = st->z_list[i][j];
			if (st->z_list[i][j] > st->z_max)
				st->z_max = st->z_list[i][j];
		}
	}
}

int			y_count(char *file_name)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(file_name, O_RDONLY, 0);
	i = 0;
	while (get_next_line(fd, &line))
	{
		free(line);
		i++;
	}
	close(fd);
	return (i);
}

int			x_count(char *file_name)
{
	int		fd;
	int		i;
	char	*line;

	fd = open(file_name, O_RDONLY, 0);
	i = 0;
	if (get_next_line(fd, &line))
		i = ft_cu_wards(line, ' ');
	free(line);
	close(fd);
	return (i);
}

void		read_num(char *line, int *z_line)
{
	int		i;
	char	**num;

	i = 0;
	num = ft_strsplit(line, ' ');
	while (num[i])
	{
		z_line[i] = ft_atoi(num[i]);
		free(num[i]);
		i++;
	}
}

int			ft_starter(char *file_name, t_point_l *data)
{
	int		i;
	int		fd;
	char	*line;

	i = 0;
	data->y_short = y_count(file_name);
	data->x_leng = x_count(file_name);
	data->z_list = malloc(sizeof(int *) * data->y_short);
	while (i < data->y_short)
		data->z_list[i++] = malloc(sizeof(int) * data->x_leng);
	fd = open(file_name, O_RDONLY, 0);
	i = 0;
	while (get_next_line(fd, &line))
	{
		read_num(line, data->z_list[i]);
		free(line);
		i++;
	}
	close(fd);
	data->z_list[i] = NULL;
	z_count(data);
	data->zoom = data->wind->win_size / ((max(max(mod(data->z_min),
			mod(data->z_max)), max(data->x_leng, data->y_short))) * 1.5);
	return (1);
}
