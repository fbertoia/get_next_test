#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int i = 0;
	int fd;
	char *str;

	fd = open("test_file2", O_WRONLY);
	while ((i = get_next_line(fd, &str)) > 0)
	{
		printf("str = |%s|\ti = %d\n", str);
		free(str);
	}
	close(fd);
	return (0);
}
