/* This is a simple game called "3x+1".
 * The rules are simple -- you enter a number and I will do a series of simple arithmetic actions to it.
 * If the number is even I'll devide it by 2 and if it's odd I'll multiply it by 3 and add 1.
 * And I'll do the same with the resulting number. And with the next number. And so on and so forth.
 * I'll be doing it and showing you the result until I reach the cycle "4-2-1" which is the end of the game.
 * And then I'll show you how many steps it took to reach the cycle.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char number[5];
	int inumber;
	puts("This is a simple game called '3x+1'.");
	puts("The rules are simple -- you enter a number and I will do a series of simple arithmetic actions to it.");
	puts("If the number is even I'll devide it by 2 and if it's odd I'll multiply it by 3 and add 1.");
	puts("And I'll do the same with the resulting number. And with the next number. And so on and so forth.");
	puts("I'll be doing it and showing you the result until I reach the loop '4-2-1' which is the end of the game.");
	puts("And then I'll show you how many steps it took to reach the loop.\n");
	puts("So please enter your number: ");
	scanf("%5s", number);
	usleep(1000000);
	puts("\nLet's rock!");
	usleep(1000000);
	inumber = atoi(number);
	while (inumber != 1) {
		if (inumber % 2) {
			inumber = (inumber * 3 + 1);
			printf("%i\n", inumber);
		}
		else {
			inumber = (inumber / 2);
			printf("%i\n", inumber);
		}
		usleep(100000);
	}
	puts("That's it! The next number is 4 which takes us to the loop.");
	return 0;
}
