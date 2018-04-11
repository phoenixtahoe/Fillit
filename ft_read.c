/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 18:14:24 by mosborne          #+#    #+#             */
/*   Updated: 2017/12/13 09:22:34 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_opener(char *rf)
{
	static int	x = 0;
	int			fd;
	char		buf;
	char		*str;

	fd = open(rf, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		x++;
		if (x >= 546)
			return (0);
	}
	str = ft_strnew(x);
	close(fd);
	x = 0;
	fd = open(rf, O_RDONLY);
	while (read(fd, &buf, 1))
		str[x++] = buf;
	close(fd);
	return (str);
}
