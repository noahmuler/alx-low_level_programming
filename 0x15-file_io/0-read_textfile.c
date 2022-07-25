#include "main.h"
/**
 * read_textfile - reads and prints to POSIX stdout
 * @filename: file name ptr
 * @letters: number of letters to be scanned
 * Return: Fail (0) or Success (number of scanned letters)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (op == -1 || rd == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);
	return (wr);
}
