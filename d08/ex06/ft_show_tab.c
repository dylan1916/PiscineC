/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:55:46 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/23 10:30:40 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (*(str + n) != '\0')
	{
		ft_putchar(*(str + n));
		n++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
}

int		puissance(int nb)
{
	int		res;

	res = 1;
	while (nb != 1)
	{
		res = res * 10;
		nb--;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	int		nb_chif;
	int		moins;
	int		nb2;

	nb_chif = 0;
	if (nb == 0)
		nb_chif = 1;
	nb2 = nb;
	while (nb != 0)
	{
		nb = nb / 10;
		nb_chif++;
	}
	nb = nb2;
	while (nb_chif != 0)
	{
		moins = nb / puissance(nb_chif);
		ft_putchar(48 + moins);
		nb = nb - (moins * puissance(nb_chif));
		nb_chif--;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
