#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
/**
 */
int *_strstok(char *string)
{
	int z;
	for (z = 0; string[z] != '\0'; z++)
	{
		printf("%c", string[z]);
		if (string == ' ')
		{
			printf("\n");
		}
	}
	return (0);
}
