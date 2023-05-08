#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename:name of then file
 * @text_content:content in the file
 *
 * Return:1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fn;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}
	fn = fopen(filename, "a");
	if (fn == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);
		if (length > 0)
			fwrite(text_content, sizeof(char), length, fn);
	}
	fclose(fn);
	return (1);
}
