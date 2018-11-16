/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 19:21:26 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/06 14:43:04 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char letter;

	letter = 'z';
	while (letter != 'a' - 1)
	{
		ft_putchar(letter);
		letter--;
	}
}
