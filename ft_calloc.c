/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabounna <yabounna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:33:58 by yabounna          #+#    #+#             */
/*   Updated: 2024/11/05 11:32:35 by yabounna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tableau;

	if (count > 0 && size > SIZE_MAX / count)
	{
		return (NULL);
	}
	tableau = malloc(count * size);
	if (tableau == NULL)
	{
		return (NULL);
	}
	ft_bzero(tableau, count * size);
	return (tableau);
}
