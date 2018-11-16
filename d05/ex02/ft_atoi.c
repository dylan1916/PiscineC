/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 10:05:40 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/10 10:36:40 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int sign;
	int i;

	res = 0;
	sign = 0;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
			|| (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		sign = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10;
		res += (int)str[i] - '0';
		i++;
	}
	if (sign == 1)
		return (-res);
	else
		return (res);
}
