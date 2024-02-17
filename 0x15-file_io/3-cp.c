#include "main.h"
#define BUFFER 1024

/**
 * copy_to_file - Copies content from a file
 * @file_from: Source file
 * @file_to: Destination file
 *
 * Return: 1 on success,
 * -1 on failure
 */
int copy_to_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, flags, fd_from_close, fd_to_close;
	char buff[BUFFER];
	mode_t file_perm;
	ssize_t num_read, num_write;
	
	if (file_from == NULL)
		return (0);
	flags = O_CREAT | O_WRONLY | O_TRUNC;
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if ((fd_from = open(file_from, O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if ((fd_to = open(file_to, flags, file_perm)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if ((num_read = read(fd_from, buff, BUFFER)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", file_from);
		exit(98);
	}
	if ((num_write = write(fd_to, buff, (size_t)num_read)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	fd_from_close = close(fd_from);
	fd_to_close = close(fd_to);
	if (fd_from_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (fd_to_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (num_write);
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int ret;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);;
	}
	ret = copy_to_file(av[1], av[2]);
	printf("-> %i)\n", ret);
	return (0);
}
