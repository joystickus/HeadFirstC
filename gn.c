/* This is a simple game called "Guess a number".
 * The rules are simple -- I think of a number from 1 to 100 and you have to guess it in 7 tries.  
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	puts("This is a simple game called 'Guess a number'.");
	puts("The rules are simple -- I think of a number from 1 to 100 and you have to guess it in 7 tries.");
	puts("So I've come up with a number. Now it's your turn.");
	int number = rand() % 100 + 1;
	int guess;
	int count = 7;
	while (count > 0) {
		scanf("%i", &guess);
		printf("Your guess is %i\n", guess);
		if (guess < number) {
			count--;
			printf("My number is bigger. Tries left: %i.\n", count);
			continue;
		} else if (guess > number) {
			count--;
			printf("My number is smaller. Tries left: %i.\n", count);
			continue;
		} else {
			puts("You win!");
			break;
		}
	}
	printf("The end! My number is %i\n", number);
	return 0;
}
