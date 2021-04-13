#include <stdio.h>
#include <stdlib.h>
int main()
{
	int stock = 180;
	char order_string[4];
	int order;
	while(stock > 0) {
		printf("%i glasses left\nHow many glasses do they want? ", stock);
		scanf("%3s", order_string);
		order = atoi(order_string);
		stock = stock - order;
		printf("You ordered %i glasses\n", order);
	}
	puts("We're out of stock, baby!");
	return 0;
}
