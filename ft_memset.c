#include <stdio.h>
#include <ctype.h>

void *ft_memset(void *ptr, int value, size_t count)
{
    while (count)
    {
        *(char*)ptr = value;
        ptr++;
        count--;
    }
}

int main(void)
{
    char str[11] = "0123456789";
    ft_memset(str, 65, 3);
    printf("%s", str);
}