#include <stdio.h>

int main(){
	float latitude;
	float longitude;
	char info[80];
	int started = ......... ;
	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", ......... , ......... , ......... ) == 3){
		if (started)
			printf(",\n");
		else
			started = ......... ;
		prinf("{latitude: %f, longitude: %f, info: '%s'}", ......... , ......... , ......... );
	}
	puts("\n]");
	return 0;
}
