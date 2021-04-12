/*
BE the Compiler
Each of the C files on this page represents a complete source file.
Your job is to play compiler and determine whether each of these files
will compile, and if not, why not.
For extra bonus points, say what you think the output of each compiled
file will be when run, and whether you think the code is working as intended.
 */

/* p23A
 * It will compile.
 * It'll give "Small card".
 * It doesn't work as intended as 'else' is related to the wrong 'if'.
 */
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

/* p23B
 * It will compile.
 * It'll give nothing.
 * It doesn't work as intended as 'else' goes within the set of action of the first 'if'.
 */
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
	}
	return 0;
}

/* p23C
 * It will compile.
 * It'll give "Small card".
 * It doesn't work as intended as 'else' is related to the wrong 'if'.
 * It's the same as A.
 */
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

/* p23D
 * It will not compile as it's missing a closing curly brace.
 */
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
