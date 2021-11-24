#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: a NULL terminated string
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	mode_t mode;
	ssize_t file_wr;

	mode = S_IRUSR | S_IWUSR;
	/* !filename */
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		file_wr = write(fd, text_content, len);
		if (file_wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
