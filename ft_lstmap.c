#include <stdio.h>
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

t_list	*ft_lstnew(void *content)
{
	t_list *result = NULL;
	result = malloc(sizeof(t_list));
	result->content = content;
	result->next = NULL;
	return (result);
}

t_list *ft_lstlast(t_list *lst)
{
	t_list *head;

	if (lst == NULL)
		return (0);
	head = lst;
	while (head->next)
		head = head->next;
	return (head);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result = NULL;
	t_list *temp;
	if (!lst)
		del(lst);
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			del(temp);
			free(temp);
		}
		if (!result)
			result = temp;
		else
			ft_lstadd_back(&result, temp);
		lst =  lst->next;
	}
	return result;
}

//void	*ft_map(void *ct)
//{
//	int i;
//	void	*c;
//	char	*pouet;

//	c = ct;
//	i = -1;
//	pouet = (char *)c;
//	while (pouet[++i])
//		if (pouet[i] == 'o')
//			pouet[i] = 'a';
//	return (c);
//}

//void ft_del(void *content)
//{
//	printf("%s\n", (char*)content);
//}

//int main(void)
//{
//	t_list		*elem;
//	t_list		*elem2;
//	t_list		*elem3;
//	t_list		*elem4;
//	t_list		*list;
//	char		str[] = "lorem";
//	char		str2[] = "ipsum";
//	char		str3[] = "dolor";
//	char		str4[] = "sit";

//	elem = ft_lstnew(str);
//	elem2 = ft_lstnew(str2);
//	elem3 = ft_lstnew(str3);
//	elem4 = ft_lstnew(str4);

//	elem->next = elem2;
//	elem2->next = elem3;
//	elem3->next = elem4;
//	list = ft_lstmap(elem, &ft_map, &ft_del);
//	while (list)
//	{
//		printf("%s\n", (char*)list->content);
//		list = list->next;
//	}
//}