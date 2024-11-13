/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:14:00 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/12 14:24:45 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	over_flow(unsigned long total, int signe)
{
	if (total >= 9223372036854775807 && signe == 1)
		return (-1);
	if ((total > 9223372036854775807) && (signe == -1))
		return (0);
	return (3);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned long	total;

	signe = 1;
	i = 0;
	total = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = ((total * 10) + (str[i] - '0'));
		if (over_flow(total, signe) != 3)
			return (over_flow(total, signe));
		i++;
	}
	return (total * signe);
}
