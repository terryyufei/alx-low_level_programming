#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of the file containing string to be appended
 * @text_content: pointer to the string we want to append
 * Return: 1 on success | -1 on failure
 * if filename is NULL return -1 | if text_content is NULL dont add anything
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (1);

	fp = fopen(filename, "a"); /*open file in append mode*/
	if (fp == NULL)
		return (-1);

	/*check if text_content is NULL*/
	if (text_content != NULL)
	{
		fprintf(fp, "%s", text_content);
	}
	fclose(fp);

	return (1);
}
