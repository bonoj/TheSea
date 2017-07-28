int add(int a, int b) {
    return a + b;
}

int useGlobalVariable() {
	extern int globalVariable;
	printf("Your global variable holds value: %d", globalVariable);
	printf("\n");
}