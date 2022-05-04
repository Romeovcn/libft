#include <bsd/string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	while (size)
	{
		dst[i] = src[i];
		i++;
		size--;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

int	main(void)
{
	char src[6] = "hello";
	char dest[6];
	ft_strlcpy(dest, src, 5);
	// printf("%ld ", ft_strlcpy(dest, src, 0));
	printf("%ld ", strlcpy(dest, src, 0));
	printf("%d", dest[0]);
}