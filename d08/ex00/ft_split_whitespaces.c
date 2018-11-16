/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:15:12 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/17 16:15:32 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_l(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while ((str[i]) && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			j++;
			i++;
		}
		return (j);
	}
	return (j);
}

void	filltab(char *tab, char *str)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
	while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		i++;
	while ((str[i]) && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		tab[a] = str[i];
		a++;
		i++;
	}
	tab[a] = '\0';
}

void	counttab(char **tab, char *str)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
	while (str[i])
	{
		if (!(tab[a] = malloc(sizeof(char) * count_l(&str[i]) + 1)))
			return ;
		filltab(tab[a], &str[i]);
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		while ((str[i]) && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		a++;
	}
}

int		count_w(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i]) && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i] == '\0')
			return (j);
		j++;
		while ((str[i]) && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
		if (str[i] == '\0')
			return (j);
		i++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		b;

	b = count_w(str);
	if (!(tab = (char**)malloc(sizeof(char*) * b + 1)))
		return (NULL);
	tab[b] = 0;
	if (b == 0)
		return (tab);
	counttab(tab, str);
	return (tab);
}
