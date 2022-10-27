/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:51:50 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/18 09:52:49 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;

	if (lst && del)
	{
		while (*lst)
		{
			ptr = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = ptr;
		}
		*lst = NULL;
	}
}
// void	delete(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	t_list *a, *b, *c;
// 	a = ft_lstnew(ft_strdup("Future"));
// 	b = ft_lstnew(ft_strdup("is"));
// 	c = ft_lstnew(ft_strdup("loading"));
// 	ft_lstadd_back(&a, b);
// 	ft_lstadd_back(&a, c);
// 	while(a)
// 	{
// 		printf("%s\n", a ->content);
// 		a = a->next;
// 	}
// 	ft_lstclear(&a, delete);
// 	// printf("Val : %s \n", b->content);	
// 	return (0);
// }
