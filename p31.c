/*
 * A short C program is listed below. One block of the program is missing.
 * Your challenge is to match the candidate block of code (on the left),
 * with the output that you'd see if the block were inserted.
 * Not all of the lines of output will be used,
 * and some of the lines of output might be used more than once.
 * Draw lines connecting the candidate blocks of code with their matching command-line output.
 */

/* 1. The output is:
 * 00 11 21 32 42
 */
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		y = x - y;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}

/* 2. The output is:
 * 00 11 23 36 410
 */
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		y = y + x;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}

/* 3. The output is:
 * 02 14 25 36 47
 */
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		y = y + 2;
		if (y > 4)
			y = y - 1;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}

/* 4. The output is:
 * 11 34 59
 */
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		x = x + 1;
		y = y + x;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}

/* 5. The output is:
 * 02 14 36 48
 */
#include <stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	while (x < 5) {
		if (y < 5) {
			x = x + 1;
			if (y < 3)
				x = x - 1;
		}
		y = y + 2;
		printf("%i%i ", x, y);
		x = x + 1;
	}
	return 0;
}

/* Candidates:
-----------
y = x - y;
-----------
y = y + x;
-----------
y = y + 2;
if (y > 4)
	y = y - 1;
-----------
x = x + 1;
y = y + x;
-----------
if (y < 5) {
	x = x + 1;
	if (y < 3)
	x = x - 1;
}
y = y + 2;
-----------
 */

/* Possible output:
 * 22 46
 * 11 34 59 - 4.
 * 02 14 26 38
 * 02 14 36 48 - 5.
 * 00 11 21 32 42 - 1.
 * 11 21 32 42 53
 * 00 11 23 36 410 - 2.
 * 02 14 25 36 47 - 3.
 */
