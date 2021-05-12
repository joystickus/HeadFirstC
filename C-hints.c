/*
 * A general comment to describe the program.
 */

// libraries
#include <stdio.h> // for puts, printf, scanf functions
#include <stlib.h> // for ???
#include <string.h> // for string functions strstr, strchr, strcmp, strcpy, strlen, strcat: if (strstr(str_var0, str_var1)) -- find str_var1 in str_var0
#include <limits.h> // for INT_MIN and INT_MAX

// global variables for separate functions
int int_var = 1; // integers are stored in 4 bytes
		 // 1xxxxxxx xxxxxxxx xxxxxxxx xxxxxxxx for negatives
		 // 0xxxxxxx xxxxxxxx xxxxxxxx xxxxxxxx for positives
int int_var;
char string_var[20];
char string_var[20] = "text";

int main()
{

	// local variables
	int int_var = 1;
	int int_var;
	char string_var[20];    // string is not a string, it's and array of characters
				// the last goes a sentinel character \O, so the array is always +1 of what we mean
				// and it always begins from 0
	char string_var = 't';
	char string_var[20] = "text";
	int int_array[] = {1. 2. 3};
	char array_of_arrays[][80] = {
		"text1",
		"text2",
		"text3"
	};

	// standard functions
	puts("text"); // gives a new line automatically
	printf("text %s/%i\n", string_var/int_var); // don't forget an "\n" for a new line
	scanf("%s/%i", string_var/&int_var);    // takes from keyboard and puts it to var
						// "&" for int
						// %2s if you want to read two characters and not just one
						// to be exact it takes a pointer as its parameter and string name is actually a pointer
	fgets(string_var, 80, stdin); // to a string_var put 80 symbols from keyboard
	int_var = atoi(string_var); // string to integer
	int_var++;
	int_var--;

	// conditions and cycles
	if ((var1 >/</==/!= value1) && (var2 >/</==/!= value2)) {       // each inner condition (if any) is in separate set of round brackets
									// && and || checks both conditions and &/| checks one
		function;
	} else if (var >/</==/!= value) { // brackets are needed if there's more than one function
		function;
	} else {
		function;
	} 

	switch(string_var) { // checks only a single value so it doesn't work for 'strings' (arrays of characters)
	case 'S':
	case 'A':
	case 'B': // all the three cases for one function
		function;
		break; // to skip the rest
	case 'X':
		function; // no break -- no skip; it means that the function in the next section will also be performed!
	case 'Z':
		function;
		break;
	default:
		function;
	}

	while (var >/</==/!= value) {
		function;
		break; // if you want to get out of the loop
		continue; // if you want to skip the rest and go to the beginning of the loop
	}

	for (i = 0; i < 5; i++) {
		function;
	}

	return 0
}
