/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:15:46 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/10 15:38:21 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;
	int b;

	a = argc - 1;
	b = 0;
	while (a > 0)
	{
		while (argv[a][b])
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
		b = 0;
		a--;
	}
	return (0);
}
