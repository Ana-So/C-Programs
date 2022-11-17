#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("Number: ");
	scanf("%d", &number);
	
	if(number%2==0){
		printf("\nEven number.\n");
	}
	else{
		printf("\nOdd number.\n");
	}
	
	return 0;
}
