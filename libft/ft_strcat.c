/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:04:28 by mosborne          #+#    #+#             */
/*   Updated: 2017/09/26 14:47:49 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;

	i = ft_strlen(s1);
	while (*s2 != '\0')
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}
