/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:09:38 by mosborne          #+#    #+#             */
/*   Updated: 2017/12/18 19:08:53 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	int		piece;
	int		size;
	char	*grid;
	char	**new;
	char	*array;

	if (ac == 2)
	{
		grid = ft_opener(av[1]);
		new = ft_splitter(grid, &piece);
		size = ft_mapsize(piece);
		array = ft_strnew(size * (size + 1));
		ft_gridmaker(array, new, size, piece);
		ft_putchar('\n');
	}
	else
	{
		ft_putstr("usage: ");
		ft_putstr(av[0]);
		ft_putstr(" target_file\n");
	}
	return (0);
}
