/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:06:01 by yabounna          #+#    #+#             */
/*   Updated: 2024/10/22 14:17:38 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	s;

	s = (unsigned char)c;
	if ((s >= '0' && s <= '9') || (s >= 'a' && s <= 'z')
		|| (s >= 'A' && s <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
