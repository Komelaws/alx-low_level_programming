#include <main.h>

/**
 * read_textfile - Function that reads a text file and prints it the
 * POSIX standard output
 * @filename: The name of the file to rad text from
 * @letters: The size of the text to read
 *
 * Return: num
 */
size_t read_textfile(const char *filename, size_t letters)
{
	size_t num;
	FILE *fp;

	if (filename == NULL)
		return (0);

	fp = open(filename, 'r');
	if (fp == NULL)
		return (0);
}
