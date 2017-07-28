/*
 ============================================================================
 Name        : TheSea.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x = 5, y = 12, z;

	z = x + y;

	printf("%d + %d = %d\n", x, y, x + y);

	char *p = "Hello World";

	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	printf("%s\n", p);

	printf("%d\n", EXIT_SUCCESS);

	return EXIT_SUCCESS;
}
