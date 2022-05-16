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

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free(lst);
}

// void	ft_del(void *content)
// {
// 	printf("%s supprime", (char *)content);
// }

// int main(int argc, char const *argv[])
// {
// 	char array1[] = "salut1";

// 	t_list *lst1 = ft_lstnew(array1);
// 	ft_lstdelone(lst1, &ft_del);
// 	return (0);
// }