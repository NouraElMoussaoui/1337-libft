/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:07:42 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:53:02 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*to;
	char	*from;
	size_t	i;

	i = 0;
	to = (char *)dst;
	from = (char *)src;
	if (to > from)
	{
		while (len > 0)
		{
			to[len - 1] = from[len - 1];
			len--;
		}
	}
	ft_memcpy (to, from, len);
	return (to);
}
