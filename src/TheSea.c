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
#include <math.h>

#include "TheOcean.h"

int main(void) {

	int x = 5, y = 12, z;

	z = x + y;

	printf("%d + %d = %d\n", x, y, x + y);

	char *p = "Hello World";

	//puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	printf("%s\n", p);

	printf("What's the secret number? ");

	fflush( stdout );

	scanf("%d", &x);
	printf("%d\n", x);

	if (x == 2) {
		printf("You found the secret number!\n");
	} else {
		printf("Better luck next time.");
	}

	printf("x = %d\n", x);


	for (int i = 0; i < 10; i++) {
		printf("%d ", i + 1);
	}

	printf("\n");

	printf("Calling add(a,b) from TheOcean.h: 2 + 7 = %d\n", add(2, 7));

	int root = sqrt(9);

	printf("The square root of 9 is %d\n", root);


	printf("%d\n", EXIT_SUCCESS);

	return EXIT_SUCCESS;
}
