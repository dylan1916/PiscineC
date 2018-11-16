/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:26:34 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/18 13:33:26 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		prime(int nb, int i)
{
	if (i > nb / 2)
		return (1);
	if ((nb % i) == 0)
		return (0);
	return (prime(nb, i + 1));
}

int		ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (prime(nb, 2));
}
