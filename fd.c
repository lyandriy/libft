#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main ()
{
	int fd;
	int nose;
	char buffer[50];

	fd = open("mierda", O_RDWR);
	nose = read(fd, buffer, 10);
	printf("%d\n", nose);
	write (fd, "XXXX\n", 5);
	close(fd);
	return 0;
}