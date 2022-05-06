#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;
	int i = 0;
	result = malloc(len * sizeof(char));
	while (s[start] && len - 1)
	{
		result[i] = s[start];
		i++;
		start++;
		len--;
	}
	result[i] = 0;
	return result;
}

int main(void)
{
	char *str = ft_substr("salut", 2, 3);
	printf("%s", str);
}