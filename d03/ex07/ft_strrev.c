/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:30:13 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/06 11:02:35 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strrev(char *str)
{
	int		a;
	int		b;
	char	c;

	b = 0;
	while (str[b] != '\0')
		b++;
	a = -1;
	while (++a < --b)
	{
		c = str[a];
		str[a] = str[b];
		str[b] = c;
	}
	return (str);
}