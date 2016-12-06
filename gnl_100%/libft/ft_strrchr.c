/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malexand <malexand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/24 14:49:45 by malexand          #+#    #+#             */
/*   Updated: 2016/11/09 17:24:04 by malexand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*search;

	i = -1;
	search = NULL;
	while (s[++i])
		if (s[i] == c)
			search = (char *)&s[i];
	if (c == '\0')
		return ((char*)&s[i]);
	return (search);
}
