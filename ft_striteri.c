/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:59:08 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 15:03:12 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void f(unsigned int i, char *str)
// {
// 	(void)i;

// 	while (*str)
// 	{
// 		if (*str >= 65 && *str <= 90)
// 			*str += 32;
// 		str++;
// 	}	
// }
// void	ft_putchar(unsigned int i, char *c)
// {
// 	(void)i;
// 	write(1, c, 1);
// }
// int main()
// {
// 	char *s = "Future is loading";
// 	ft_striteri(s,&ft_putchar);
// }