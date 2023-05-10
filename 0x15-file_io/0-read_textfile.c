#include "main.h"
#include <stdio.h>
/**
 * read_textfile - read a text file and print it.
 * @filename: name of file to be readed.
 * @letters: the number of letters it should read and print.
 * Return: 2 success, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *print_field;
	int file, read_file;

	if (filename == NULL)
		return (0);
	/* create the buffer print_field */
	print_field = malloc(letters * sizeof(char));
	if (print_field == NULL)
		return (0);
	/* Open the file */
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	/* read the file and save  in tha buffer*/
	read_file = read(file, print_field, letters);
	/*write as standard output */
	write(STDOUT_FILENO, print_field, read_file);
	close(file);
	free(print_field);
	return (read_file);
}
