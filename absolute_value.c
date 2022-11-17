#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("Value: ");
	scanf("%d", &number);
	
	if(number < 0){
		number= number *- 1;
		printf("\nAbsolute value = %d\n", number);
	}
	else{
		printf("\nAbsolute value = %d\n", number);
	}
	
	return 0;
}
