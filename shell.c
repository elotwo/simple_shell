#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "shell.h"
/**
 */
int main(int argc, char **argv)
{
	print_prompt1();
	if (argc > 1)
	{
		strings(argv);
	}
	return (0);
}
