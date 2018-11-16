/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:24:58 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/16 19:59:33 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int a;

	a = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = nb * (-1);
	}
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		a = nb % 10;
		ft_putchar(a + 48);
	}
}
