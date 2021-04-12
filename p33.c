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
	puts("Enter the card_name: ");
	scanf("%2s", card_name);
	int val = 0;
	int count = 0;
	switch(card_name[0]) {
		case ('K' || 'Q' || 'J'):
			val = 10;
			break;
		case 'A':
			val = 11;
			break;
		default:
			val = atoi(card_name);
	}
	printf("The card value is: %i\n", val);
	/* Check if the value is 3 to 6 */
	if ((val >= 3) && (val <= 6)) {
		count++;
		printf("Count has gone up and is now %i\n", count);
	} else if (val == 10) {
		count--;
		printf("Count has gone down and is now %i\n", count);
	}
	return 0;
}
