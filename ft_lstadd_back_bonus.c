/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-mous <nel-mous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 07:42:09 by nel-mous          #+#    #+#             */
/*   Updated: 2022/10/18 09:20:08 by nel-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (! *lst)
		*lst = new;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}
// #include<stdio.h>
// int main()
// {
//     t_list *list,*new, *other;
//     list = ft_lstnew("future"); // "Gagarin" -> null
//     //result = NULL;
//     new = ft_lstnew("is");
//     other =ft_lstnew("loading");

//     ft_lstadd_back(&list, new); // HEAD N
//     ft_lstadd_back(&new, other);

//     // printf("Val :%d \n", ft_lstsize(other));   
//     //printf("%d",ft_lstsize(list));
//     t_list *tmp;
//     tmp = list;
//     printf("head -> ");
//     while(tmp)
//     {
//      printf("%s -> ", (char *)(tmp->content));
//      tmp = tmp->next;
//     }
//     printf("NULL\n");
//     return (0);
// }
