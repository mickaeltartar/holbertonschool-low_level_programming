#include "main.h"

/**
 * cp - copies src to destination
 * @destinationFile: the destination file
 * @sourceFile: the source file
 * Return: integer
 */

int cp(char *destinationFile, char *sourceFile)
{
	char *buffer[1024];
	int destFileDescript, sourceFileDescript;
	int bytesRead, bytesWritten;
	int sourceFileCloseResult, destFileCloseResult;

	sourceFileDescript = open(sourceFile, O_RDONLY);
	if (sourceFileDescript < 0)
		return (98);

	destFileDescript = open(destinationFile, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destFileDescript < 0)
		return (99);

	bytesRead = read(sourceFileDescript, buffer, 1024);
	if (bytesRead < 0)
		return (98);

	while (bytesRead > 0)
	{
		bytesWritten = write(destFileDescript, buffer, bytesRead);
		if (bytesWritten < 0)
			return (99);

		bytesRead = read(sourceFileDescript, buffer, 1024);
		if (bytesRead < 0)
			return (98);
	}
	sourceFileCloseResult = close(sourceFileDescript);
	if (sourceFileCloseResult < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sourceFileDescript);
		return (100);
	}
	destFileCloseResult = close(destFileDescript);
	if (destFileCloseResult < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destFileDescript);
		return (100);
	}
	return (0);
}

/**
 * main - the main function
 * @argc: argument counter
 * @argv: argument value
 * Return: 0
 */

int main(int argc, char **argv)
{
	int exitStatus;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n", argv[0]);
		exit(97);
	}
	exitStatus = cp(argv[2], argv[1]);

	if (exitStatus == 98)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (exitStatus == 99)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (exitStatus == 100)
	{
		exit(100);
	}
	else
	{
		return (0);
	}
}
