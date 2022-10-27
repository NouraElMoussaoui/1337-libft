/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:45:37 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:49:50 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	char	*from;
	char	*to;

	i = 0;
	l = 0;
	from = (char *)src;
	to = dst;
	if (dstsize > 0)
	{
		while (from[i] && i < dstsize - 1)
		{
			to[i] = from[i];
			i++;
		}
		to[i] = '\0';
	}
	while (from[l])
		l++;
	return (l);
}
