#include "main.h"
/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, i;

	/* check if the filename is valid */
	if (!filename)
		return (-1);
	/* open file with read/write access,*/
	/* create it if it doesnt  exist */
	/* give it read/write permissions for the user */
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	/* Check if open() gailed */
	if (file == -1)
		return (-1);
	/* if text_content is NULL, set it to an empty string */
	if (text_content == NULL)
		text_content = "";
	/* find the length of the string text_content */
	for (i = 0; *(text_content + i) != '\0'; i++)
		;
	/* write the contents of text_content to the file */
	write(file, text_content, i);
	/* close yhe file */
	close(file);
	/* return success */
	return (1);
}
