#include "main.h"
//main Entry point
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');
//return 0
	return (0);
}
