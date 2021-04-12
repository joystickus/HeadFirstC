/*
BE the Compiler
Each of the C files on this page represents a complete source file.
Your job is to play compiler and determine whether each of these files
will compile, and if not, why not.
For extra bonus points, say what you think the output of each compiled
file will be when run, and whether you think the code is working as intended.
*/

/* p23A -- It will not compile as the second 'if' is not well intended. */
#include <stdio.h>
int main()
{
	int card = 1;
	if (card > 1) /* There is no opening curly brace here. */
		card = card - 1;
		if (card < 7)
			puts("Small card"); /* There is no closing curly brace here. */
	else { /* This curly brace is not needed here. */
		puts("Ace!");
	} /* This curly brace is not needed here. */
	return 0;
}

/* p23B -- It will not compile as the closing curly brace is not well placed. */
#include <stdio.h>
int main()
{
	int card = 1;
	if (card > 1) {
		card = card - 1;
		if (card < 7)
			puts("Small card");
	else
		puts("Ace!");
	} /* This curly brace should be two lines above, before 'else'. */
	return 0;
}

/* p23C -- */
#include <stdio.h>
int main()
{
	int card = 1;
	if (card > 1)
		card = card - 1;
		if (card < 7)
			puts("Small card");
	else {
		puts("Ace!");
	}
	return 0;
}

/* p23D -- */
#include <stdio.h>
int main()
{
	int card = 1;
	if (card > 1) {
		card = card - 1;
		if (card < 7)
			puts("Small card");
	else
		puts("Ace!");

	return 0;
}
