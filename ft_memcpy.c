/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:39:33 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 18:17:02 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*from;
	char	*to;

	i = 0;
	from = (char *)src;
	to = dst;
	if (from == NULL && to == NULL)
		return (NULL);
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (to);
}

// int main()
// {
// 	char s[] = "Future is loading";
// 	char d[20];
// 	printf("%s\n", ft_memcpy(d, s, 6));
// 	printf("%s", ft_memcpy(d, s, 6));
// }

// int main ()
// {
// 	char l[] = "abcdefh";
// 	printf("%s\n", ft_memcpy(l+2,l,4));
// 	//printf("%s", memcpy(l+2,l,4));	
// }
// int main()
// {
// 	int src[5] ={1, 2, 3, 4, 5};
// 	int dst[20];
// 	ft_memcpy(dst, src, sizeof(int)*3);
// 	printf("%d\n", dst[0]);
// 	printf("%d\n", dst[1]);
// 	printf("%d\n", dst[2]);
// }