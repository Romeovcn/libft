#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void *ft_memcpy(void *destination, const void * source, size_t size)
{
	while (size)
	{
		*(char*)destination = *(char*)source;
		destination++;
		source++;
		size--;
	}
	return (destination);
}

int main(void)
{
	char str[11] = "0123456789";
	char dest[11];
	ft_memcpy(dest, str, 11);
	printf("%s", dest);
}