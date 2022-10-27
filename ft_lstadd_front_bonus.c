/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:42:27 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/16 10:39:28 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (! *lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}
// int main()
// {
//     t_list *head = NULL;
//     char c = 'a';
//     ft_lstadd_front(&head, ft_lstnew(&c));
//     char b = 'b';
//     ft_lstadd_front(&head, ft_lstnew(&b));
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
// #include<stdio.h>
// int main()
// {
//     t_list *list,*new, *other;
//     list = ft_lstnew("Gagarin"); // "Gagarin" -> null
//     //result = NULL;
//     new = ft_lstnew("Yuri");
//     other =ft_lstnew("Hello");

//     ft_lstadd_front(&list, new); // HEAD N
//     ft_lstadd_front(&new, other);

//     printf("Val :%d \n", ft_lstsize(other));   
//     //printf("%d",ft_lstsize(list));

//     return (0);
// }
