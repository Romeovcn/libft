#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char c;
    c = 128;
    printf("Result when uppercase alphabet is passed: %d", ft_isascii(c));
    printf("\n%d", isascii(c));
    return 0;
}