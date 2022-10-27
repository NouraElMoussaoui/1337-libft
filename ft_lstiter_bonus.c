/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 07:49:07 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/18 09:20:16 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst -> next;
	}
}

// void print_content(void *content)
// {
// 	t_list	*lst ;
// 	lst = ft_lstnew(content);
// 	while (lst)
// 	{
// 		printf("%s\n", (char*)lst->content);
// 		lst = lst -> next;
// 	}
// }

// int	main()
// {
// 	t_list	*a,	*b,	*c;

// 	a = ft_lstnew("future");
// 	b = ft_lstnew("is");
// 	c = ft_lstnew("loading");
// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&a, c);
// 	printf("%d\n", ft_lstsize(c));
// 	ft_lstiter(c, &print_content);
// 	return (0);
// }
