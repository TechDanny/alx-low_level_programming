#include "main.h"

/**
 * create_file - creates a file
 * @filename:name of the file to create
 * @text_content:contents in the file
 *
 * Return:1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fp, writes, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writes = write(fp, text_content, len);

	if (fp < 0 || writes < 0)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
