#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{

}

int main(void)
{
	int count;
	int fd;
	char buf[BUF_SIZE];
	char *dict;
	int i;

	count = 0;
	i = 0;
	fd = open("test.json", O_RDWR);
	if (fd == -1)
		write(1, "Error\n", 11);
	close(fd);
}