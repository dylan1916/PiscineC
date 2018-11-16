/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 03:55:14 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/16 15:37:17 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		a;

	if (min >= max)
		return (0);
	a = 0;
	tab = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tab[a] = min;
		min++;
		a++;
	}
	*range = tab;
	return (a);
}
