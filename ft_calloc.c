#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void *ft_calloc(size_t elementCount, size_t elementSize)
{
	int *value;
	int i;

	i = 0;
	value = malloc(elementCount * elementSize);
	while (elementCount)
	{
		printf("%d\n", i + 1);
		value[i] = '\0';
		i++;
		elementCount--;
	}
	return value;
}

int main()
{
	int i = 0;
	char *pointer = (char *) ft_calloc(10, sizeof(char));
	// char *pointer = malloc(10);

	pointer[2] = 'r';
	while (i < 10)
	{
		printf("%c - %d\n", pointer[i], i + 1);
		i++;
	}
}