#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *result;
	result = malloc(sizeof(t_list));
	if (!result)
		return (0);
	result->content = content;
	result->next = NULL;
	return (result);
}

//int main(int argc, char const *argv[])
//{
//	char *array1 = 0;
//	t_list *result = ft_lstnew(array1);
//	printf("%s", (char *)result->content);
//	return (0);
//}

