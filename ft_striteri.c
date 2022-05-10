#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void ft_test(unsigned int i, char *str)
{
	unsigned int j;

	j = 0;
	*str = 'o';
}

int main(void)
{
	char s[] = "salut";
	ft_striteri(s, &ft_test);
	printf("%s", s);
}