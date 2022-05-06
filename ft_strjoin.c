#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *result;
	int i;
	int j;

	i = 0;
	j = 0;
	printf("%ld\n", (ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	while (s1[i])
	{
		result[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		result[j] = s2[i];
		i++;
		j++;
	}
	result[j] = 0;
	return result;
}

int main(void)
{
	char *result = ft_strjoin("Fun's fun", " but who needs it ?");
	printf("%s", result);
}