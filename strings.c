#include <stdio.h>
#include <stdlib.h>
#include "shell.h"
/**
 */
int strings(char **av)
{
	int i = 0;
	while(av[i] != NULL)
	{
		fprintf(stdout," %s", av[i]);
		i++;
	}
	printf("\n");
	return(0);
}
