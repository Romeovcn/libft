#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return i;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *result;

	i = 0;
	result = malloc(ft_strlen(s) * sizeof(char) + 1);
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return result;
}

char ft_test(unsigned int i, char c)
{
	char d;
	d = c + 1;
	return d;
}

int main(void)
{
	char const s[] = "salut";
	char *result = ft_strmapi(s, &ft_test);
	printf("%s", result);
	free(result);
}