/*
 * training to ask names
 */

#include <stdio.h>
#include <stdlib.h>
int main(){
	char first_name[50];
	char last_name[50];
	printf("Please enter your first name and your last name:\n");
	scanf("%50s %50s", first_name, last_name);
	printf("Your first name is '%s' and your last name is '%s'\n", first_name, last_name);
	return 0;
}
