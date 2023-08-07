#include "main.h"

/**
 * create_file - create a file
 * @filename: is the name of the file
 * @text_content: a string content to be written
 * Return: 1 on success otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fileDescriptor, bytesWritten;
	int textLength = 0;

	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fileDescriptor < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[textLength])
			textLength++;

		bytesWritten = write(fileDescriptor, text_content, textLength);
		if (bytesWritten < 0)
		{
			close(fileDescriptor);
			return (-1);
		}
	}
	close(fileDescriptor);
	return (1);
}
