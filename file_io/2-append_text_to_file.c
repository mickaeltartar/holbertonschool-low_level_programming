#include "main.h"

/**
 * append_text_to_file - appends a text at the end of file
 * @filename: is the given name of the file
 * @text_content: the given content of the file
 * Return: 1 on success otherwise 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fileDescriptor, bytesWritten;
	int contentLength;

	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_RDWR | O_APPEND);
	if (fileDescriptor < 0)
		return (-1);

	if (text_content)
	{
		contentLength = 0;

		while (text_content[contentLength])
			contentLength++;

		bytesWritten = write(fileDescriptor, text_content, contentLength);
		if (bytesWritten < 0)
			return (-1);
	}
	return (1);
}
