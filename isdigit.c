#include <stdio.h>
#include <ctype.h>  // <cctype> en C++

int ft_isdigit(char c)
{
    if (c >= 48 && c <= 57)
    {
        return 2048;
    }
    return 0;
}

int main(void)
{
    char c;
    c = '9';
    printf("Result when uppercase alphabet is passed: %d", ft_isdigit(c));
    printf("\nResult when uppercase alphabet is passed: %d", isdigit(c));
    return 0;
}