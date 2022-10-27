/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:41:10 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:54:32 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *a, const void *b, size_t n)
{
	size_t	i;
	char	*asame;	
	char	*bsame;

	asame = (char *)a;
	bsame = (char *)b;
	i = 0;
	while (i < n)
	{
		if (asame[i] != bsame[i])
			return ((unsigned char)asame[i] -(unsigned char)bsame[i]);
		i++;
	}
	return (0);
}
