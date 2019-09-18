/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:16:56 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/04 18:00:00 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	while (nb != 1)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
