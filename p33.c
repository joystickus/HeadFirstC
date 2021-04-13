/*
 * Program to evaluate face values.
* Released under the Vegas Public License.
 * (c)2014 The College Blackjack Team.
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];
	int count = 0;
	while (card_name[0] != 'X') {
		puts("Enter the card name (X to exit):");
		scanf("%2s", card_name);
		int val = 0;
		switch(card_name[0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				printf("The card value is %i\n", val);
				break;
			case 'A':
				val = 11;
				printf("The card value is %i\n", val);
				break;
			case 'X':
				puts("That's it. Thank you!");
				printf("Current count is %i\n", count);
				continue;
			default:
				val = atoi(card_name);
				if ((val < 2) || (val > 10)) {
					puts("This is not a valid card name. Try again.");
					printf("Current count is %i\n\n", count);
					continue;
				}
				printf("The card value is %i\n", val);
		}
		if ((val >= 3) && (val <= 6)) {
			count++;
			puts("Count has gone up!");
		} else if (val == 10) {
			count--;
			puts("Count has gone down!");
		}
		printf("Current count is %i\n\n", count);
	}
	return 0;
}
