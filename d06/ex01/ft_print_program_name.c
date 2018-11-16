/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:42:42 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/10 19:50:10 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int a;

	a = 0;
	argc = 0;
	while (argv[0][a])
	{
		ft_putchar(argv[0][a]);
		a++;
	}
	ft_putchar('\n');
	return (0);
}
