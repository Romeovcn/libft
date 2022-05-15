#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *result = NULL;
	result = malloc(sizeof(t_list));
	result->content = content;
	result->next = NULL;
	return result;
}


//int main(int argc, char const *argv[])
//{
//	char array1[] = "salut";

//	t_list *result = ft_lstnew(array1);
//	printf("%s", (char *)result->content);
//	return 0;
//}

