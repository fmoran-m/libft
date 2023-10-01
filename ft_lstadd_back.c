#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *temp;

	temp = *lst;
	while((*lst)->next != 0)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = temp;
}
