#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "11011 55 123 ff 0xff";
	char* pEnd;

	unsigned long long int val1 = strtoull(str, &pEnd, 2);
	unsigned long long int val2 = strtoull(pEnd, &pEnd, 8);
	unsigned long long int val3 = strtoull(pEnd, &pEnd, 10);
	unsigned long long int val4 = strtoull(pEnd, &pEnd, 16);
	unsigned long long int val5 = strtoull(pEnd, &pEnd, 0);

	//menampilkan hasil
	printf("val1 = %lu\n", val1);
	printf("val2 = %lu\n", val2);
	printf("val3 = %lu\n", val3);
	printf("val4 = %lu\n", val4);
	printf("val5 = %lu\n", val5);

	_getch();
	return 0;
}