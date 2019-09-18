/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:42:46 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/02 17:22:38 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int swap;

	size--;
	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[size])
			{
				swap = tab[i];
				tab[i] = tab[size];
				tab[size] = swap;
			}
			i++;
		}
		size--;
	}
}
