/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 08:16:07 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 12:51:35 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	existe(char c, const char *set)
{
	int	i;

	i = -1;
	while (set[++i])
	{
		if (set[i] == c)
			return (1);
	}
	return (0);
}

static int	first(const char *s1, const char *set)
{
	int	i;
	int	start;

	i = -1;
	start = 0;
	while (s1[++i])
	{
		if (existe(s1[i], set))
			start++;
		else
			break ;
	}
	return (start);
}

static int	last(const char *s1, const char *set)
{
	int	i;
	int	end;

	i = ft_strlen(s1);
	end = 0;
	while (--i)
	{
		if (existe(s1[i], set))
			end++;
		else
			break ;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = first(s1, set);
	end = last(s1, set);
	if (!s1 || !set)
		return (NULL);
	return (ft_substr(s1, start, (ft_strlen(s1) - (start + end))));
}
