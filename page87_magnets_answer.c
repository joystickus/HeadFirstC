void print_reverse(char* s){
	size_t len = strlen(s);
	char* t = s + len - 1;
	while (t >= s){
		printf("%c", *t);
		t = t - 1;
	}
	puts("");
}

/*
 * s
 * t
 * len
 * s
 * -
 *  1
 *  t
 */
