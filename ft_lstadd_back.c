#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *temp;

    if(*lst == NULL)
	*lst = new;
    temp = *lst;
    while(temp->next != 0)
	temp = temp->next;
    temp->next = new;
    new->next = 0;
}
