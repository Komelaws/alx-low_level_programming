#include "main.h"

/**
 * _strlen - Finds string length
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
 * append_text_to_file - Appends text to file
 * @filename: File to append text to
 * @text_content: Text to append to file
 *
 * Return: 1 on success,
 * -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	if ((fd = open(filename, O_RDWR | O_APPEND)) == -1)
		return (-1);
	if (text_content == NULL)
		close(fd);
	if (write(fd, text_content, _strlen(text_content)) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
