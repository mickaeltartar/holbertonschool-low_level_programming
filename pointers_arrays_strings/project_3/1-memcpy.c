
/**
 * _memcpy - copy n bytes memory from src to dest
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}
	return (dest);
}
