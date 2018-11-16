/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etordjma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:43:43 by etordjma          #+#    #+#             */
/*   Updated: 2018/07/11 18:38:15 by etordjma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	while (to_find[i] != '\0')
		i++;
	j = 0;
	while (str[j] != '\0')
	{
		k = 0;
		while (to_find[k] != '\0' && to_find[k] == str[j + k])
		{
			k++;
			if (!to_find[k])
			{
				return (char*)&str[j];
			}
		}
		j++;
	}
	return (0);
}
