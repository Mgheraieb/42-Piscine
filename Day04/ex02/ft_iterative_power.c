/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:27:05 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/04 18:04:34 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;

	if (power < 0 || nb > 46340)
		return (0);
	i = 1;
	while (power > 0)
	{
		i *= nb;
		power--;
	}
	return (i);
}
