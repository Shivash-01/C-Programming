// C program to illustrate file inclusion
// <> used to import system header file
#include <stdio.h>

// " " used to import user-defined file
#include "myfile.h"

// main function
int main()
{
	// add function defined in process.h
	add(10, 20);

	// mult function defined in process.h
	multiply(10, 20);

	// printf defined in stdio.h
	printf("Process completed");
	return 0;
}
