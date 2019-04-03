#include "21400481.h"
#include <string.h>
#include <stdlib.h>

int reverse_digits (int n){
	int result = 0;
	while(n != 0){
		result = result * 10 + (n % 10);
		n /= 10;
	}
	return result;
}
char* binarize(int n){
	int i=0;
	char* binary_array;
	binary_array = (char*)malloc(sizeof(char)*2048);
	for(;n!=0;n/=2){
		binary_array[i] = (n%2)+'0';
		i++;
	}
	binary_array[i]=0;
	return binary_array;
}
