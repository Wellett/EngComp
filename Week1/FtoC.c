/* Author: William Ellett
 * Staff ID: 133003
 *
 * Program as an exercise for tutorial
 */

#include <stdio.h>

#define OFFSET 32
#define SCALE 5.0/9.0

int 
main(int argc, char *argv[]){
	double temp;
	printf("Enter Temperature (F): ");
	scanf("%lf", &temp);
	temp = temp - OFFSET;
	temp = temp * SCALE;
	printf("\nIs equal to %.2fC", temp);
	return 0;
}
