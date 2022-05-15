#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

//t_list	*ft_lstnew(void *content)
//{
//	t_list *result = NULL;
//	result = malloc(sizeof(t_list));
//	result->content = content;
//	result->next = NULL;
//	return result;
//}

//t_list *ft_lstlast(t_list *lst)
//{
//	t_list *head;

//	if (lst == NULL)
//		return (0);
//	head = lst;
//	while (head->next)
//		head = head->next;
//	return head;
//}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;
	if (*lst)
	{
	last = ft_lstlast(*lst);
	last->next = new;
	} 
	else
	{
		*lst = new;
	}
}

//int main(int argc, char const *argv[])
//{
//	char array1[] = "salut1";
//	char array2[] = "salut2";
//	char arraylast[] = "Fin";

//	//t_list *lst1 = ft_lstnew(array1);
//	t_list *lst1 = NULL;
//	t_list *last = ft_lstnew(arraylast);
//	//lst1->next = ft_lstnew(array2);
//	ft_lstadd_back(&lst1, last);
//	t_list *result = ft_lstlast(lst1);
//	printf("%s", (char*)result->content);
//	return 0;
//}