#include "main.h"
/**
* append_text_to_file - appends a text at the end of a file
* @filename: name of file to add text to
* @text_content: is a NULL terminated string to add to the file
* Return: 1 on success, -1 on failure
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_apnd, len;
	ssize_t file_wr, file_cls;

	if (filename == NULL)
		return (-1);
	fd_apnd = open(filename, O_WRONLY | O_APPEND);
	if (fd_apnd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd_apnd);
		return (1);
	}
	len = strlen(text_content);
	file_wr = write(fd_apnd, text_content, len);
	if (file_wr == -1)
		return (-1);
	file_cls = close(fd_apnd);
	if (file_cls == -1)
		return (-1);
	return (1);
}
