/* **********************(char *)**************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:56:44 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/10/03 14:57:20 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void	f(void* a)
{
    int i = 0;
    char *str;

    str = a;
    while(str[i]) 
    {
	str[i] = str[i] + 2;
	i++;
    }
}
/*
int main (void)
{
    t_list *primero;
    t_list *segundo;
    t_list *tercero;
    char *a = ft_strdup("AAA");
    char *b = ft_strdup("HHH");
    char *c = ft_strdup("MMM");

    primero = ft_lstnew(a);
    segundo = ft_lstnew (b);
    tercero = ft_lstnew (c);
    primero->next = segundo;
    segundo->next = tercero;
    printf("%s\n",(char *)primero->content);
    printf("%s\n",(char *)segundo->content);
    printf("%s\n",(char *)tercero->content);
    ft_lstiter(primero, f);
    printf("%s\n",(char *)primero->content);
    printf("%s\n",(char *)segundo->content);
    printf("%s\n",(char *)tercero->content);
return 0; 
}
*/
