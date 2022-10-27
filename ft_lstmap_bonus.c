/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:13:26 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/18 18:20:34 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_node;

	new = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, new_node);
		lst = lst->next;
	}
	return (new);
}

// void	*f(void *content)
// {
// 	char	*arr;

// 	arr = strdup(content);
// 	arr[0] = 'n';
// 	arr[1] = 'o';
// 	return (arr);
// }

// void	delete(void *content)
// {
// 	free(content);
// }

// int	main()
// {
// 	t_list	*head;

// 	head = NULL;
// 	char *a = "future";
// 	ft_lstadd_back(&head, ft_lstnew(a));
// 	char *b = "is";
// 	ft_lstadd_back(&head, ft_lstnew(b));
// 	char *c = "loading";
// 	ft_lstadd_back(&head, ft_lstnew(c));
// 	t_list *temp;
// 	t_list *newlist;

// 	newlist = ft_lstmap(head, f, delete);
// 	temp = newlist;
// 	while (temp)
// 	{
// 		printf("%s ->", temp->content);
// 		temp = temp->next;
// 	}
// }