#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to be written
 * @text_content: content to be written to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;

	if (!filename)
		return (-1);
	/* open file in append mode */
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		/* if the text_content is NULL, set it to an empty string*/
		text_content = "";
	/* loop through string to find its length */
	for (i = 0; text_content[i] != '\0'; i++)
		;
	/* erite the content of the file */
	write(file, text_content, i);
	/* close the file */
	close(file);
	return (1);
}
