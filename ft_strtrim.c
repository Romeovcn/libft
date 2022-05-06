#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return i;
}

int ft_check_set(char *s1, char *set)
{

}

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int i = 0;
	int set_size = strlen(set);
	while (*s1)
	{
		if (ft_check_set(*s1, set))
			i = i + set_size;
	}
	return result;
}

int main(void)
{
	char *result = ft_strtrim("----wuba luba dub dub----", "-");
	printf("%s", result);
}