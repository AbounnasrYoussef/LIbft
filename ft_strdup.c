/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:43:32 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/04 18:06:49 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*d;

	i = ft_strlen(s1);
	d = (char *)malloc((i + 1) * sizeof(char));
	if (d == NULL)
		return (NULL);
	ft_memcpy(d, s1, i);
	d[i] = '\0';
	return (d);
}
