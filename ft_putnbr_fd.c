#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{	
		write(fd, "-", 1);
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		nb = nb % 10;
	}
	ft_putchar(nb + '0', fd);
}

int main(void)
{
	int fd;

	fd = open("test.json", O_RDWR);
	if (fd == -1)
		write(1, "Error\n", 11);
	ft_putnbr_fd(2567, fd);
	close(fd);
}