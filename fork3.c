#include <stdio.h>

int main() {
	char *argv[3];

	int pid = fork ();

	if (pid == 0) {
		printf("Hello\n");
	}

	printf("Goodbye\n");
	
	return 0;
}
