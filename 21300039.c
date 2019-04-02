#include "21300039.h"

int sort_digits(int n){
	int i,j,len=0,tmp;
	int num[10],result=0;
	while(n !=0){
		if((n % 10)!=0){
			num[len] = n % 10;
			len++;
		}
		n /= 10;
	}
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(num[j]<num[i]){
				tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}
	for(i=0;i<len;i++){
		result = result * 10 + num[i];
	}
	return result;
}
