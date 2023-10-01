#include "libft.h"

void ft_lstclear(t_list **lst, void(*del)(void *))
{
    t_list *temp; 

    while ((*lst)->next != 0)
    {
	temp = (*lst)->next;
	del((*lst)->content);
	free(*lst);
	*lst = temp;
    }
    *lst = NULL;
}
