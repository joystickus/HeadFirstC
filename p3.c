int card_count = 11;					/* Create an integer variable and set it to 11. */
if (card_count > 10)					/* Check if the value of the variable is more than 10. */
	puts("The deck is hot. Increase bet.");		/* If so, print an unformatted message. */



int c = 10;						/* Create an integer variable and set it to 10. */
while (c > 0) {						/* Create a cycle for checking if the value of the variable is more than 0. */
	puts("I must not write code in class");		/* While the value of the variable is more than 0, print an unformatted message. */
	c = c - 1;					/* Decrease the value of the variable by 1. */
}							/* End of the embedded condition. It'll repeat 10 times. */



/* Assume name shorter than 20 chars. */		/* Comment. */
char ex[20];						/* Create a character variable 20 characters long */
puts("Enter boyfriend's name: ");			/* Print an unformatted message. */
scanf("%s", ex);					/* Take character input from the keyboard and place it to the "ex" variable. */
printf("Dear %s.\n\n\tYou're history.\n", ex);		/* Print a formatted message. Place the value of the variable after "Dear". */



char suit = 'H';					/* Create a character variable and set it to 'H'. */
switch(suit) {						/* Create a multiple check for the value of the variable "suit". */
	case 'C':					/* Check if the value of the variable equals 'C'. */
		puts("Clubs");				/* If yes, print an unformatted message "Clubs". */
		break;					/* Get out of the checking procedure. */
	case 'D':					/* Check if the value of the variable equals 'D'. */
		puts("Diamonds");			/* If yes, print an unformatted message "Diamonds". */
		break;					/* Get out of the checking procedure. */
	case 'H':					/* Check if the value of the variable equals 'H'. */
		puts("Hearts");				/* If yes, print an unformatted message "Hearts". */
		break;					/* Get out of the checking procedure. */
	default:					/* If nothing previous fits, do the following. */
		puts("Spades");				/* Print an unformatted message "Spades". */
}							/* End of the embedded condition. */
