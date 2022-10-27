/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:10:25 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 09:34:23 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (lst == NULL)
		return (NULL);
	while (ptr-> next != NULL)
		ptr = ptr->next;
	return (ptr);
}
// int main()
// {
//     t_list *head = NULL;
//     t_list *node;
//     t_list *node2;    
//     node = ft_lstnew("hello");
//     node2 = ft_lstnew("world");   
//     ft_lstadd_front(&head, node);
//     ft_lstadd_front(&head, node2);   
//     t_list *tmp;
//     tmp = head;
//     printf("head -> ");
//     while(tmp)
//     {
//      printf("%s -> ", (char *)(tmp->content));
//      tmp = tmp->next;
//     }
//     printf("NULL\n");   
//     t_list *last = ft_lstlast(head);
//      printf("%s -> ", (char *)(last->content));
// }
