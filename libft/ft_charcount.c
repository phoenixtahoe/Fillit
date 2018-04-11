/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 13:45:49 by mosborne          #+#    #+#             */
/*   Updated: 2017/11/06 14:49:00 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_charcount(char *str, char c)
{
	int i;
	int x;
	int y;

	i = 0;
	y = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] == c)
			y++;
		i++;
	}
	return (y);
}
