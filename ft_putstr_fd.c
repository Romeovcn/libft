#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int main(void)
{
	int fd;

	fd = open("test.json", O_RDWR);
	if (fd == -1)
		write(1, "Error\n", 11);
	ft_putstr_fd("salut", fd);
	close(fd);
}