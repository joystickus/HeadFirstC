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
	int number = rand() % 101;
	int guess;
	int count = 7;
	while (count != 0) {
		scanf("%i", guess);
		if (guess = number) {
			printf("You've guessed it! The number is %i!\n", number);
			break;
		} else if (guess < number) {
			if (count != 2) {
				count--;
				printf("My number is bigger than that! You have %i tries left.\n", count);
				continue;
			} else {
				count--;
				printf("My number is bigger than that! You have %i try left.\n", count);
				continue;
			}
		} else if (guess > number) {
			if (count != 2) {
				count--;
				printf("My number is smaller than that! You have %i tries left.\n", count);
				continue;
			} else {
				count--;
				printf("My number is smaller than that! You have %i try left.\n", count);
				continue;
			}
		}
		printf("Alas! You lose! The number was %i.\n", number);
	}
	return 0;
}
