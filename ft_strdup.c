#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strdup(const char *source)
{
	char *copy = malloc(ft_strlen(source) * sizeof(char) + 1);
	int i;

	i = 0;
	while (source[i])
	{
		copy[i] = source[i];
		i++;
	}
	copy[i] = 0;
	return copy;
}

int main()
{

	char *str = "salut c moi";
	char *copy = ft_strdup(str);
	printf("%s", copy);
}
