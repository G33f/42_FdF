/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 01:36:05 by wpoudre           #+#    #+#             */
/*   Updated: 2020/01/27 01:36:10 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FDF_H

#define	FDF_H
#define MAX(a, b) (a > b) ? a : b

#include "libft/libft.h"
#include <mlx.h>
#include <math.h>
#include <stdio.h>

typedef struct	s_wind
{
	void		*win;
	int			iso;
	int			win_size;
}				t_wind;

typedef struct	s_QN
{
	float 		w;
	float 		x;
	float 		y;
	float 		z;
}				t_QN;

typedef struct	s_point_l
{
	int			x_leng;
	int			y_short;
	int			**z_list;
	int			zoom;
	int			color;
	int			bpp;
	int			size_line;
	int			endian;
	int			kay;
	int			x;
	int			y;
	float 		magnit;
	void		*mlx;
	void		*img_ptr;
	char 		*img_data;
	t_wind		*wind;
	t_QN		*rot;
	t_QN		*vek;
}				t_point_l;

int				y_count(char *file_name);
int				x_count(char *file_name);
void			read_num(char *line, int *z_line);
int				ft_starter(char *file_name, t_point_l *data);

void			draw(t_point_l *st);
void			ft_drow_line(t_dot *pl1, t_dot *pl2, t_point_l *st);
void			ready(t_dot *p1, t_dot *p2, t_point_l *st);
void			ready_2(t_dot *p1, t_dot *p2, t_point_l *st);
void			ready_1(t_dot *p1, t_dot *p2, t_point_l *st);
void			drow_m_y(t_dot *p1, t_dot *p2, t_point_l *st);
void			drow_y(t_dot *p1, t_dot *p2, t_point_l *st);
void			drow_m_x(t_dot *p1, t_dot *p2, t_point_l *st);
void			drow_x(t_dot *p1, t_dot *p2, t_point_l *st);

void			qn_rot(t_point_l *st, t_QN *qn, float agl);
void			qn_rot_rev(t_point_l *st, t_QN *qn, float agl);
t_QN			*rotate_e(t_QN *vec, t_point_l *st);
void			rot(t_dot *p1, t_dot *p2, t_point_l *st);

t_QN			*qn_min(t_QN *s)
t_QN			*qn_sum(t_QN *q1, t_QN *q2)
void			magn(t_QN *st)
t_QN			*new_qn(float w, float x, float y, float z)

int				mod(int r)
t_point_l		*inicalizaciya(void)
void			zoom(t_dot *p1, t_dot *p2, t_point_l *st)
void			back_sh(t_dot *p1, t_dot *p2, t_point_l *st)
void			shift(t_dot *p1, t_dot *p2, t_point_l *st)

void			color(char *b1, t_point_l *st)
void			put_img_pixel(t_point_l *data, int x, int y)

int				mouse_release(int kay, int x, int y, t_point_l *st)
int				mouse_move(int x, int y, t_point_l *st)
int				mouse_press(int kay, int x, int y, t_point_l *st)

int				kay_prass_1(int kay, t_point_l *st)
int				kay_prass_2(int kay, t_point_l *st)


#endif
