/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:26:02 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/08 11:55:34 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	char	ascii;
	int		i;
	int		j;

	ascii = 32;
	while (ascii <= 126)
	{
		i = 1;
		while (i != argc)
		{
			if (argv[i][0] == ascii)
			{
				j = 0;
				while (argv[i][j] != '\0')
				{
					ft_putchar(argv[i][j]);
					j++;
				}
				ft_putchar('\n');
			}
			i++;
		}
		ascii++;
	}
	return (0);
}
