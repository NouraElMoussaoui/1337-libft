/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:13:49 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/17 17:21:00 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *S1, const char *S2, size_t n)
{
	size_t	i;

	i = 0;
	while ((S1[i] || S2[i]) && i < n)
	{
		if (S1[i] != S2[i])
			return ((unsigned char)S1[i] - (unsigned char)S2[i]);
		else
			i++;
	}
	return (0);
}
