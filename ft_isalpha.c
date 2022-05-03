#include <stdio.h>
#include <ctype.h>  // <cctype> en C++

int ft_isalpha(char c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
    {
        return 1024;
    }
    return 0;
}

int main(void)
{
    char c;
    c = 'a';
    printf("Result when uppercase alphabet is passed: %d", ft_isalpha(c));
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
    return 0;
}