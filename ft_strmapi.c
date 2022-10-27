/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:32:40 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 14:48:04 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*iterate;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	iterate = (char *)malloc(ft_strlen(s)+1);
	if (!iterate)
		return (NULL);
	while (s[i])
	{
		iterate[i] = f(i, s[i]);
		i++;
	}
	iterate[i] = '\0';
	return (iterate);
}
// char	f(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 97 && c <= 122)
// 		c -= 32;
// 	return (c);
// }

// int main()
// {
// 	printf("%s", ft_strmapi("NoUra", f));
// }