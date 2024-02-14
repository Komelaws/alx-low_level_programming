#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it the
 * POSIX standard output
 * @filename: Filename
 * @letters: Number of letters to read
 *
 * Return: num
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_read, num_write;
	char *str;

	if (filename == NULL)
		return (0);
	if ((fd = open(filename, O_RDWR)) == -1)
		return (0);
	str = malloc(letters + 1);
	if (str == NULL)
		return (0);
	if ((num_read = read(fd, str, letters)) == -1)
		return (0);
	if ((num_write = write(STDOUT_FILENO, str, (size_t)num_read)) == -1)
		return (0);
	free(str);
	close(fd);
	return (num_write);
}
