/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:28:50 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:50:08 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if ((!str || !find) && len == 0)
		return (NULL);
	if (ft_strlen(find) == 0)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i + j] == find[j])
		{
			while (str[i + j] == find[j] && find[j] && i + j < len)
				j++;
			if (j == ft_strlen(find))
				return ((char *)(&str[i]));
			j = 0;
		}
	i++;
	}
	return (NULL);
}
