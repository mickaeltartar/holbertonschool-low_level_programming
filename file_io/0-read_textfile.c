#include "main.h"

/**
 * read_textfile - read a text file and print it in to the POSIX output
 * @filename: the given file
 * @letters: is the number of letters should read
 * Return: the actual number of letters to be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	buffer = malloc((letters) * sizeof(char));
	if (!buffer)
		return (0);
	if (!filename)
	{
		free(buffer);
		return (0);
	}
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor < 0)
	{
		free(buffer);
		return (0);
	}
	bytesRead = read(fileDescriptor, buffer, letters);
	if (bytesRead < 0)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten != bytesRead || bytesWritten < 0)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}
	close(fileDescriptor);
	free(buffer);
	return (bytesWritten);
}
