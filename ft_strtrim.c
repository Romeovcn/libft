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

int ft_check_set_forward(char const *s1, char const *set, int index)
{
	int set_count;
	int match_count;

	set_count = ft_strlen(set);
	match_count = 0;
	while (*set)
	{
		if (s1[index] == *set)
			match_count++;
		index++;
		set++;
	}
	if (set_count == match_count)
		return 1;
	return 0;
}

int ft_check_set_backward(char s1, char const *set)
{
	int set_count;
	int match_count;

	match_count = 0;
	while (*set)
	{
		if (s1 == *set)
			return 1;
		set++;
	}
	return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *result;
	int i = 0;
	int set_size = ft_strlen(set);
	int total_size = ft_strlen(s1);
	while (ft_check_set_forward(s1, set, total_size))
		total_size = total_size - set_size;
	// printf("%d", total_size);
	printf("%c", s1[total_size + 1]);
}

int main(void)
{
	char *result = ft_strtrim("----wuba luba--dub dub----", "--");
	// printf("%s", result);
}