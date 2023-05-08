#include "main.h"

/**
 * read_textfile - reads text from a file
 * @filename:name of the file
 * @letters:number of letters printed
 *
 * Return:0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t reads, writes, opens;

	if (filename == NULL)
	{
		return (0);
	}
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		return (0);
	}
	opens = open(filename, O_RDONLY);
	reads = read(opens, ch, letters);
	writes = write(STDOUT_FILENO, ch, reads);
	if (opens < 0 || reads < 0 || writes < 0 || writes < reads)
	{
		free(ch);
		return (0);
	}
	free(ch);
	close(opens);
	return (writes);
}
