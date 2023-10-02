#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;

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
	}
	return (new);
}
