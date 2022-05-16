#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *result = NULL;
	result = malloc(sizeof(t_list));
	result->content = content;
	result->next = NULL;
	return (result);
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	while (lst)
	{
		(*f)((char *)lst->content);
		// (*f)(test);
		// result = ft_lstnew(;
		// printf("%s\n", test);
		// result = result->next;
		lst =  lst->next;
	}
	return lst;
}

void	*ft_map(void *ct)
{
	int i;
	void	*c;
	char	*pouet;

	c = ct;
	i = -1;
	pouet = (char *)c;
	while (pouet[++i])
		if (pouet[i] == 'o')
			pouet[i] = 'a';
	return (c);
}

void ft_del(void *content)
{
	printf("%s\n", (char*)content);
}

int main(int argc, char const *argv[])
{
	t_list *lst1 = ft_lstnew("salot1");
	t_list *lst2 = ft_lstnew("salot2");
	t_list *lst3 = ft_lstnew("salot3");
	t_list *lst4 = ft_lstnew("salot4");
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	ft_lstmap(lst1, &ft_map, &ft_del);
	return (0);
}