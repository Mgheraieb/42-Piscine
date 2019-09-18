/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:31:38 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/13 11:32:55 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	if (!((*range) = (int*)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
