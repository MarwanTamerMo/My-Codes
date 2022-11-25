#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>

float get_average(float array[5]);

int main() {


	float array[5];
	float average = 0;

	printf(" Please enter your array ( 5 Numbers ) : ");
	scanf("%f", &array[0]);
	scanf("%f", &array[1]);
	scanf("%f", &array[2]);
	scanf("%f", &array[3]);
	scanf("%f", &array[4]);

	average = get_average(array);

	printf(" The average of the array you've entered is : %f \n", average);

}

 float get_average(float array[5]) {
    
	int i;
	float sum = 0;
	float average = 0;

	for (i = 0; i < 5; i++) {

		sum = sum + array[i];
	}
	
	average = sum / 5.f;
	
	return average;
	

}