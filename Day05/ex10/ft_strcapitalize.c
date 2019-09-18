/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 23:04:32 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/10 13:45:01 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_maj_et_all_min(char *str)
{
	int i;

	i = 0;
	if (str	[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int carac;

	i = 1;
	carac = 0;
	ft_maj_et_all_min(str);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122 && carac == 1)
		{
			str[i] -= 32;
			carac = 0;
		}
		if (str[i] >= 48 && str[i] <= 122)
			carac = 0;
		else if (str[i] < 48 || str[i] > 122)
			carac = 1;
		i++;
	}
	return (str);
}
