/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:12:39 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/17 17:12:00 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t len)
{
	size_t	i;
	char	*b;

	i = 0;
	b = a;
	while (i < len)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return ((void *)b);
}

// int    main()
// {
//     int arr[5] = {1, 2, 3, 7};
//     ft_memset(arr, 5, 3 * sizeof(int));
// 	int i;
// 	i = 0;
//     while ( i < 4)
//     {
//     printf("%d \n", arr[i]);
//     i++;
// }
// }

// int main ()
// {
// 	char str[] = "Future is loading";
// 	printf("%s",ft_memset(str, ' ', 8));
// 	return 0;
// }
