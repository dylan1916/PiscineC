/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 19:58:08 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/19 10:19:09 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		ft_putchar(*str++);
}

void	affiche(char *str[])
{
	int k;

	k = 1;
	while (str[k])
	{
		ft_putstr(str[k]);
		ft_putchar('\n');
		k++;
	}
}

int		main(int argc, char *argv[])
{
	char	*temp;
	int		k;
	int		j;

	k = argc - 1;
	while (k >= 1)
	{
		j = 1;
		while (j != k)
		{
			if (ft_strcmp(argv[k], argv[j]) < 0)
			{
				temp = argv[k];
				argv[k] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		k--;
	}
	affiche(argv);
	return (0);
}
