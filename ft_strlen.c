#include <stdio.h>
#include <ctype.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return i;
}

// int main(void)
// {
//         printf("%d", ft_strlen("hello"));
// }