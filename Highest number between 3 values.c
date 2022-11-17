#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("Enter 3 numbers separated by space: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 > num2){
		if(num1 > num3){
			printf("\nHighest number: %d\n", num1);
		}
		else{
			printf("\nHighest number: %d\n", num3);
		}
	}
	else{
		if(num2 > num3){
			printf("\nHighest number: %d\n", num2);
		}
		else{
			printf("\nHighest number: %d\n", num3);
		}
	}
	return 0;
}
