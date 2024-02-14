#include "main.h"

/**
 * _strlen - Find the length of a string
 * @s: String to finds its length
 *
 * Return: len
 */
size_t _strlen(char *s)
{
	size_t len;

	len = 0;
	while (*(s++))
		len++;
	return (len);
}

/**
 * create_file - Creates a text file
 * @filename: Filename to create
 * @text_content: Text to write to the file
 *
 * Return: 1 on success,
 * -1 on fialure or error.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	mode_t file_perm;

	file_perm = S_IRUSR | S_IWUSR;
	if (filename == NULL)
		return (-1);
	if ((fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, file_perm)) == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	if (write(fd, text_content, _strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);

}
