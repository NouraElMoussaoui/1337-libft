/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:51:55 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 09:31:50 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
// int main()
// {
//     t_list *head = NULL;
//     char c = 'a';
//     ft_lstadd_front(&head, ft_lstnew(&c));
//     char b = 'b';
//     ft_lstadd_front(&head, ft_lstnew(&b));
//     int size = ft_lstsize(head);
//     printf("%d\n", size);
//     t_list *tmp;
//     tmp = head;
//     printf("head -> ");
//     while(tmp)
//     {
//      printf("%c -> ", *(char *)(tmp->content));
//      tmp = tmp->next;
//     }
//     printf("NULL\n");
// }
