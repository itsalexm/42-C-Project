/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:12:25 by malexand          #+#    #+#             */
/*   Updated: 2016/12/06 17:52:41 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# include <mlx.h>
# include "../libft/includes/libft.h"
# include "../libft/includes/libmlx.h"
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <math.h>
# include <errno.h>

int				put_img(t_mlx *mlx);
void			check(char	*str);
t_point			***str_to_point(t_mlx *mlx, char *str);
int				my_keyfunc(int keycode, t_mlx *mlx);
void			put_menu(t_mlx *mlx);
int				pressDestroy(t_mlx *mlx);

#endif
