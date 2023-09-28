#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 big, 1  little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	return (*c);
}

