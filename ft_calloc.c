/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 08:54:29 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 09:38:10 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	n;

	n = count * size;
	res = malloc(n);
	if (!res)
		return (NULL);
	ft_bzero(res, n);
	return (res);
}
// #include <stdio.h>
// int main ()
// {
// 	int *p = ft_calloc(5, sizeof(int));
// 	for (int i = 0;i<5;i++)
// 		printf("%c ", p[i]);
// }
