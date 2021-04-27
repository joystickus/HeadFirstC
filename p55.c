#include <stdio.h>
#include <stdio.h>
int main() {
	char line[10];
	puts("Enter your line:");
	fgets(line, 10, stdin);
	printf("Your line is %s\n", line);
	return 0;
}
