#include <stdio.h>
#include <ctype.h>

void ft_bzero(void *ptr, size_t n)
{
    while (n)
    {
        *(char*)ptr = 0;
        ptr++;
        n--;
    }
}

int main(void)
{
    char str[11] = "0123456789";
    ft_bzero(str, 3);
    printf("%d\n", str[0]);
    printf("%d\n", str[1]);
    printf("%d\n", str[2]);
    printf("%d\n", str[3]);
    printf("%d\n", str[4]);
    printf("%d\n", str[5]);
    printf("%d\n", str[6]);
    printf("%d\n", str[7]);
}