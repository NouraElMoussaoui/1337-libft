/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:12:02 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:55:11 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*find;
	size_t			i;

	find = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (find[i] == (unsigned char) c)
			return (&find[i]);
		i++;
	}
	return (NULL);
}
