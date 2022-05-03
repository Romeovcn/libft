#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
    {
        return 16384;
    }
    return 0;
}

// int main(void)
// {
//     int c;
//     c = 0;
//     while (c <= 127)
//     {
//         printf("%c = %d == %d : %d\n", c, c, isprint(c), ft_isprint(c));
//         c++;
//     }
//     return 0;
// }