#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list *head;

	if (lst == NULL)
		return (0);
	head = lst;
	while (head->next)
		head = head->next;
	return head;
}

//int main(int argc, char const *argv[])
//{
//	char array1[] = "salut1";
//	char array2[] = "salut2";
//	char arrayhead[] = "Debut";

//	t_list *lst1 = ft_lstnew(array1);
//	t_list *head = ft_lstnew(arrayhead);
//	lst1->next = ft_lstnew(array2);
//	ft_lstadd_front(&lst1, head);
//	t_list *result = ft_lstlast(head);
//	printf("%s", (char*)result->content);
//	return 0;
//}