#include "lists.h"

void _constructor(void) __attribute__((constructor));
/**
 * _constructor - execute before main
 */
void _constructor(void)
{
	printf("You're beat! and yest, you must allow,\n
		I bore my house upon my back\n");
}
