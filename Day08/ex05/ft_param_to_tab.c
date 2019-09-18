/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:18:52 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/17 11:59:28 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char					*ft_strcpy(char *src)
{
	int		i;
	char	*dest;

	dest = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*res;

	res = (t_stock_par*)malloc(sizeof(t_stock_par) * ac + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		res[i].size_param = ft_strlen(av[i]);
		res[i].str = av[i];
		res[i].copy = ft_strcpy(av[i]);
		res[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	res[i].str = 0;
	return (res);
}
