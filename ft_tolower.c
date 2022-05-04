#include <stdio.h>
#include <unistd.h>

int ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		return (character + 32);
	return (character);
}

int main(void)
{
	printf("%c", ft_tolower(93));
	
}