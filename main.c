#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "21400481.h"
#include "21300039.h"


#define TRUE 1
#define FALSE 0

int main(void){
  char input[2048];
  int i,is_number,reverse,sort;
  char* binarized;

  while(fgets(input, sizeof(input), stdin) != NULL){
    // Receive a user input
    if(input[strlen(input) - 1] == '\n')
      input[strlen(input) - 1] = 0;

    // Terminal condition
    if(strcmp(input, "quit") == 0){
      break;
    }
    
    is_number = TRUE;
    for(i=0;i<strlen(input);i++){
	    if(!isdigit(input[i])){
		    printf("Entered input is not a number\n");
		    is_number = FALSE;
		    break;
	    }
    }
    if(is_number){
	    reverse = reverse_digits(atoi(input));
	    sort = sort_digits(atoi(input));
	    binarized = binarize(atoi(input));
	    printf("reverse> %d\nsort> %d\n",reverse, sort);
	    printf("binarize> ");
	    for(i=strlen(binarized)-1;i>=0;i--){
		    printf("%c",binarized[i]);
	    }
	    printf("\n");
    }
    free(binarized);
  }

  // Terminating
  printf("(bye)\n");
  return 0;
}
