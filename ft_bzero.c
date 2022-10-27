/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:53:14 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 09:37:53 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

// int main ()
// {
// 	char str[] = "Future";
// 	ft_bzero(str,1);
// 	printf("%s",str);
// 	printf("%c",str[0]);
// 	printf("%c", str[1]);
// 	printf("%c", str[3]);

//     return 0;
// }
