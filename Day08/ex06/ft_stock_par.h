/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgheraie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:17:16 by mgheraie          #+#    #+#             */
/*   Updated: 2018/09/15 17:55:44 by mgheraie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_putstr(char *str);
void				ft_putnbr(int c);
void				ft_display(char **str);
void				ft_show_tab(struct s_stock_par *par);
#endif
