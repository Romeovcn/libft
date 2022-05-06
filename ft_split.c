#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int check_c(char c, char charset)
{
	if (c == charset)
		return 1;
	return 0;
}

int get_array_size(char const *str, char charset)
{
	int count;
	int i = 0;
	count = 0;
	while (str[i])
	{
		while (check_c(str[i], charset) && str[i])
			i++;
		if (!check_c(str[i], charset) && str[i])
			count++;
		while (!check_c(str[i], charset) && str[i])
			i++;
	}
	return count;
}

char *get_next_word(char const *str, char charset)
{
	char *word;
	int count;
	int i;

	count = 0;
	i = 0;
	while (!check_c(str[count], charset))
		count++;
	word = malloc((count + 1) * sizeof(char));
	while (!check_c(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	return word;
}

char **ft_split(char const *s, char c)
{
	int i;
	int count;
	// char result[i];

	count = get_array_size(s, c);
	i = 0;
	printf("%d", count);
	// get_next_word(s, c);
	// while (*s)
	// {
	// 	if (check_c(*s, c))
	// 	{

	// 	}
	// 	s++;
	// }

}

int main(void)
{
	ft_split("-salut--tu--vas-bien--", '-');
	// char **result = ft_split("salut-tu-vas-bien", '-');
	// printf("%s", result[0]);
}