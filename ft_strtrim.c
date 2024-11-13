/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:17:34 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/05 10:33:16 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static short	find_world(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	fin;
	size_t	debut;

	if (s1 == NULL || set == NULL)
		return (NULL);
	fin = ft_strlen(s1) - 1;
	debut = 0;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (find_world(s1[debut], set))
	{
		debut++;
	}
	while (find_world(s1[fin], set))
	{
		fin--;
	}
	return (ft_substr(s1, debut, fin - (debut - 1)));
}
