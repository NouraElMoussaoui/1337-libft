/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:33:05 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:50:36 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *find, int c)
{
	int	i;

	i = 0;
	while (find[i])
		i++;
	while (i >= 0)
	{
		if (find[i] == (char) c)
			return ((char *)&find[i]);
		i--;
	}
	return (NULL);
}
