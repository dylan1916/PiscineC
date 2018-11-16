/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 04:47:56 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/16 15:37:35 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		k;
	int		j;
	int		somme;
	char	*resultat;

	somme = 0;
	i = 0;
	while (argv[++i])
		somme = somme + ft_strlen(argv[i]);
	somme = somme + argc - 1;
	if (!(resultat = (char*)malloc(sizeof(char*) * (somme + 1))))
		return (0);
	i = 0;
	k = 0;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
			resultat[k++] = argv[i][j];
		if (i < argc - 1)
			resultat[k++] = '\n';
	}
	resultat[k] = '\0';
	return (resultat);
}
