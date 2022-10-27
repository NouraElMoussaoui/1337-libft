/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:16:02 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 09:54:34 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>
// #include <fcntl.h>

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
}

// int main ()
// {
// 	int fd;
// 	fd = open("str", O_CREAT | O_RDONLY | O_WRONLY | O_RDWR , 0644);
// 	ft_putstr_fd("future is loding", fd);
// 	close(fd);
// }
