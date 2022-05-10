#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);  
}

int main(void)
{
	int fd;

	fd = open("test.json", O_RDWR);
	if (fd == -1)
		write(1, "Error\n", 11);
	ft_putchar_fd('l', fd);
	close(fd);
}