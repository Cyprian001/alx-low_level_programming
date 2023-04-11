#include "main.h"


/**
 *  * get_endianness - funct that checks the endianness
 *    * Return:always 0 if max endian and 1 for min endian
 */

int get_endianness(void)
{
	unsigned int b;
	char *a;

	b = 1;
	a = (char *) &b;

	return ((int)*a);
}
