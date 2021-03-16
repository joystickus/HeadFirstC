/*
 * data
 * 42.363400,-71.098465,Speed = 21
 * 42.363327,-71.097588,Speed = 23
 * 42.363255,-71.096710,Speed = 17
 */

/*
 * JSON
 * data=[
 * {latitude: 42.363400, longitude: -71.098465, info: 'Speed = 21'},
 * {latitude: 42.363327, longitude: -71.097588, info: 'Speed = 23'},
 * {latitude: 42.363255, longitude: -71.096710, info: 'Speed = 17'},
 * ]
 */

#include <stdio.h>

int main(){
	float latitude;
	float longitude;
	char info[80];
	int started = 0;
	puts("data=[");
	while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3){
		if (started)
			printf(",\n");
		else
			started = 1;
		prinf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
	}
	puts("\n]");
	return 0;
}
