#include "main.h"

/**
 * read_textfile - function that reads and writes text from a file
 * @filename: pointer to the file name.
 * @letters: The number of letters function should read and print.
 *
 * Return: numer of @letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fn;
	ssize_t wrt, rdd;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fn = open(filename, O_RDONLY);
	rdd = read(fn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rdd);

	if (fn == -1 || rdd == -1 || wrt == -1 || wrt != rdd)
		return (0);

	free(buff);
	close(fn);

	return (wrt);
}
