#include "main.h"
/**
* read_textfile - reads a text file and print it to the POSIX standard output
* @filename: file to be read
* @letters: number of letters it should read and print
* Return: actual number of letters it could read and print or if fails 0
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t file_rd, file_wr, file_cls;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	/* read count bytes = number of bytes*/
	file_rd = read(fd, buf, letters);
	if (file_rd == -1)
	{
		free(buf);
		return (0);
	}
	/* symbolic cons STDOUT_FILENO fd = 1 */
	if (file_rd > 0)
		file_wr = write(STDOUT_FILENO, buf, file_rd);
	if (file_wr == -1)
	{
		free(buf);
		return (0);
	}
	file_cls = close(fd);
	if (file_cls == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (file_rd);
}
