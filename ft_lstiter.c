#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list *result = NULL;
// 	result = malloc(sizeof(t_list));
// 	result->content = content;
// 	result->next = NULL;
// 	return (result);
// }

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst =  lst->next;
	}
}

// void ft_del(void *content)
// {
// 	printf("%s\n", (char*)content);
// }

// int main(int argc, char const *argv[])
// {
// 	t_list *lst1 = ft_lstnew("salut1");
// 	t_list *lst2 = ft_lstnew("salut2");
// 	t_list *lst3 = ft_lstnew("salut3");
// 	t_list *lst4 = ft_lstnew("salut4");

// 	lst1->next = lst2;
// 	lst2->next = lst3;
// 	lst3->next = lst4;
// 	ft_lstiter(lst1, &ft_del);
// 	return (0);
// }