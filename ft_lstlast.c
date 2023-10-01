#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst->next != 0)
	{
		lst = lst->next;
	}
	return (lst);
}
