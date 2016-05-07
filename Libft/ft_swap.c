/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/10 11:04:42 by malexand          #+#    #+#             */
/*   Updated: 2016/05/07 14:14:36 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_swap(int *a, int *b)
{
	int nbr;

	nbr = *a;
	*a  = *b;
	*b  = nbr;
}
