#include "main.h"
int main (void)
{
	_printf("%s", NULL);
	_printf("%");
	_printf("% ");
	_printf(NULL);
	_printf("%\0");
	_printf(NULL);
	_printf("%s", NULL);
	return (0);
}
