#include "main.h"
/**
* _memset - fills a memory block with a constant byte
* 0s: address to memory block
* 0b: char to be used
* 0n: numebr of bytes to be used
*
* return: pointer to the memory block
*/
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
