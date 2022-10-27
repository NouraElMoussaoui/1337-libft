/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:24:25 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/21 13:12:32 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbofdigits(long int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*s;
	int			len;
	long int	nbr;

	nbr = (long int) n;
	len = nbofdigits(nbr);
	s = (char *)malloc((len + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nbr == 0)
		s[0] = nbr + '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		s[len - 1] = nbr % 10 + '0';
		nbr /= 10;
		len --;
	}
	return (s);
}
