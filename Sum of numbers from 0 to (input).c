#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_WARNINGS

#include <stdio.h>

int sum(int);

int main() {
	int range, sumanswer;

	printf(" The max range you want to calculate the sum from 0 to your entry :");
	scanf("%d", &range);


	sumanswer = sum(range);

	printf(" The sum from 0 to %d is : %d ", range, sumanswer);


}

int sum(int range) {

	int sum = 0;

	for (int i = 0; i <= range; i++) {

		sum = sum + i;

	}
	return sum;

}