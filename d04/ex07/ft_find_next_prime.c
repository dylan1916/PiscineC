/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 13:28:50 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/18 14:36:51 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int a;

	a = 2;
	while (a <= nb / a)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
