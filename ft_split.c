#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char **ft_split(char const *s, char c)
{

}

int main(void)
{
	char **result = ft_split("salut-tu-vas-bien", '-');
	printf("%s", result[0]);
}