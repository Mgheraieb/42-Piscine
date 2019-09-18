/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:38:06 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/14 14:12:57 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_malloc_tab(int argc, char **argv)
{
	int		i;
	int		j;
	int		nb;
	char	*res;

	i = 1;
	nb = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			nb++;
			j++;
		}
		i++;
	}
	res = (char*)malloc(sizeof(char) * nb + 1);
	if (res == 0)
		return (NULL);
	return (res);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		i;
	int		nb;
	int		j;

	res = ft_malloc_tab(argc, argv);
	i = 1;
	j = 0;
	nb = 0;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			res[nb] = argv[i][j];
			j++;
			nb++;
		}
		if (i < argc - 1)
			res[nb++] = '\n';
		i++;
	}
	res[nb] = '\0';
	return (res);
}
