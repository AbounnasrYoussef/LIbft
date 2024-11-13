/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:58:12 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/12 13:12:03 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*check_s(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dup;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (check_s(s1, s2));
	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dup[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		dup[j++] = s2[i];
		i++;
	}
	dup[j] = '\0';
	return (dup);
}
