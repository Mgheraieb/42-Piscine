/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:45:11 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/08 11:58:59 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i != argc)
	{
		while (argv[0][j] != '\0')
		{
			ft_putchar(argv[0][j]);
			j++;
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
