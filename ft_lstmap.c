/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:41:45 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/10/03 16:56:49 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	t_list	*res;

<<<<<<< HEAD
	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		res = f(lst->content);
		temp = ft_lstnew(res);
		if (temp == NULL)
		{
			ft_lstclear(&new, del);
			del(res);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
=======
	if (lst == NULL || f == NULL)
	    return (NULL);
	new = ft_lstnew(f(lst->content));
	if (new == NULL)
	    return (NULL);
	lst = lst->next;
	while (lst)
	{
	    temp = ft_lstnew(f(lst->content));
	    if (temp == NULL)
	    {
		    ft_lstclear(&new, del);
		    return (NULL);
	    }
	    ft_lstadd_back(&new, temp);
	    lst = lst->next;
>>>>>>> 68a7bd9e0959b921ae946adfd844dc4ed5783bd7
	}
	return (new);
}
