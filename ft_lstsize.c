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

//void	ft_lstadd_front(t_list **lst, t_list *new)
//{
//	new->next = *lst;
//	*lst = new;
//}

int ft_lstsize(t_list *lst)
{
	int count;
	t_list *head;

	count = 0;
	head = lst;
	while (head)
	{
		head = head->next;
		count++;
	}
	return count;
}

//int main(int argc, char const *argv[])
//{
//	char array1[] = "salut1";
//	char array2[] = "salut2";

//	t_list *lst1 = ft_lstnew(array1);
//	t_list *lst2 = ft_lstnew(array2);
//	ft_lstadd_front(&lst1, lst2);
//	ft_lstsize(lst2);
//	//printf("%s", (char*)lst2->next->content);
//	return 0;
//}