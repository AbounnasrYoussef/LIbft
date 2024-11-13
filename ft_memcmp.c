/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:01:29 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/11 10:45:52 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*d1;
	unsigned char	*d2;

	if (n == 0)
	{
		return (0);
	}
	d1 = (unsigned char *)s1;
	d2 = (unsigned char *)s2;
	while ((*d1 == *d2) && n > 1)
	{
		d1++;
		d2++;
		n--;
	}
	return ((int)(*d1 - *d2));
}
