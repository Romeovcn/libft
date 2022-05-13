#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

struct s_list *ft_lstnew(void *content)
{
	struct s_list *next = NULL;
	next = malloc(sizeof(struct s_list));
	next->content = content;
	return next;
}


//int main(int argc, char const *argv[])
//{
//	int result = ft_lstnew(10);
//	printf("%d", result);
//	return 0;
//}

