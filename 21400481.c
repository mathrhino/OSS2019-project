#include "21400481.h"

int reverse_digits (int n){
	int result = 0;
	while(n != 0){
		result = result * 10 + (n % 10);
		n /= 10;
	}
	return result;
}
