/* This is a simple game called "3x+1".
 * The rules are simple -- you enter a number and I do a series of simple arithmetic actions to it.
 * If the number is even I devide it by 2 and if it's odd I multiply it by 3 and add 1.
 * And I do the same with the resulting number. And with the next number. And so on and so forth.
 * I'm doing it and showing you the result until I reach the loop '4-2-1' which is the end of the game.
 * And then I show you how many steps it took me to reach the loop.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	char number[5];
	int inumber;
	int count = 0;
	puts("This is a simple game called '3x+1'.");
	puts("The rules are simple -- you enter a number and I do a series of simple arithmetic actions to it.");
	puts("If the number is even I devide it by 2 and if it's odd I multiply it by 3 and add 1.");
	puts("And I do the same with the resulting number. And with the next number. And so on and so forth.");
	puts("I'm doing it and showing you the result until I reach the loop '4-2-1' which is the end of the game.");
	puts("And then I show you how many steps it took me to reach the loop.\n");
	printf("So please enter your number: ");
	scanf("%5s", number);
	inumber = atoi(number);
	usleep(1000000);
	puts("\nLet's rock!\n");
	usleep(1000000);
	printf("%i\n", inumber);
	while (inumber != 1) {
		if (inumber % 2) { // checking if the number is odd
			inumber = (inumber * 3 + 1);
			printf("%i\n", inumber);
		}
		else {
			inumber = (inumber / 2);
			printf("%i\n", inumber);
		}
		count++;
		usleep(100000);
	}
	printf("That's it! The next number is 4 which takes us to the loop.\nIt's taken me %i steps to make it.\n", count);
	return 0;
}
