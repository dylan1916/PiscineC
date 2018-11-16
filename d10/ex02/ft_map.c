/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:55:15 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/22 10:03:14 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		a;
	int		*r;

	a = 0;
	r = (int*)malloc(sizeof(int) * length);
	while (a < length)
	{
		r[a] = (*f)(tab[a]);
		++a;
	}
	return (r);
}
