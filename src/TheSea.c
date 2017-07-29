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

int globalVariable = 2;

void modifyVariable(int *a) {
	*a = 22;
}

void functionToCall(int x) {
	printf("functionToCall called on %d", x);
}

struct location {
	int latitude;
	int longitude;
} here, where;

struct loc {
	int latitude;
	int longitude;
};

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int main(void) {

	struct location there, *t;
	t = &there;

	here.latitude = 20;
	here.longitude = 30;

	there = here;
	printf("The location of there is %dn, %de\n\n", there.latitude, there.longitude);
	printf("The location of where is %dn, %de\n\n", where.latitude, where.longitude);

	t->latitude = 27;
	t->longitude = 25;

	printf("there location of there is now %dn, %de", (*t).latitude, (*t).longitude);
	printf("\n\n");

	void (*pFunctionToCall)(int);
	pFunctionToCall = &functionToCall;

	pFunctionToCall(2);
	printf("\n\n");


	printf("Now let's play with pointers.\n\n");

	int x = 7, *px;
	px = &x;
	*px = x;

	printf("the memory address of x is %d\n", px);
	printf("x is %d\n", x);
	printf("x is %d\n", *px);

	printf("\n\n");

	int y = 10, *py = &y;

	printf("Let's pass by reference and modify the value at that address! ");
	modifyVariable(&y);
	printf("%d\n", y);

	printf("\n\nNow let's play with arrays.\n\n");

	static int myArray[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int arraySize = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < arraySize; i++) {
		printf("%d ", myArray[i]);
	}

	printf("\n\n");


	printf("Now let's try a macro...\n\n");


	int maxInt = MAX(7,3);


	printf("MAX(7,3) = %d\n\n", maxInt);





	/*

	int x = 5, y = 12, z;

	z = x + y;

	useGlobalVariable();

	printf("%d + %d = %d\n", x, y, z);
	printf("%d + %d = %d\n", x, y, x + y);

	char *p = "Hello World";


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
	*/

	 return EXIT_SUCCESS;
}


