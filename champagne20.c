/*
 * We'll start with 30 bottles
 * - that's about 180 glasses
 * While there's still some fizz:
 *   Display the current stock
 *   Enter the number of glasses ordered
 *   Ajust the stock
 *   Then just go round again
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int stock = 180;
	int order;
	printf("%p\n", &order);
	while(stock > 0) {
		printf("%i glasses left\nHow many glasses do you need? ", stock);
		scanf("%i", &order);
		stock = stock - order;
		printf("You ordered %i glasses\n", order);
	}
	puts("We're out of stock, baby!");
	return 0;
}

/*
 * - order_string
 * - stock
 * - "%2s"
 * - "%i glasses left\n"
 * - order
 * - order
 * - stock
 */
