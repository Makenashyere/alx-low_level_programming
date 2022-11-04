#include "main.h"
/**
 * create_file - creates file
 * @filename: pointer to name of file
 *@text_content: pointer to a string to write to the file
Return: -1 if funct fails  otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (texte_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREATE | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
