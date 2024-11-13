/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:11:12 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/05 11:31:35 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	si;
	size_t	di;

	si = ft_strlen(src);
	if (!dst && dstsize == 0)
	{
		return (si);
	}
	d = ft_strlen(dst);
	di = d;
	if (dstsize <= di)
	{
		return (dstsize + si);
	}
	s = 0;
	while (src[s] && d < dstsize - 1)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}
