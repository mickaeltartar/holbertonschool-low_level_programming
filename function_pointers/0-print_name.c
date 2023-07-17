#include "function_pointers.h"

/**
 * print_name - execute a function given as parameter
 * @name: parameter that function ptr need
 * @f: function to execute
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
