#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, num3;
	
	printf("Enter 3 numbers separated by space: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if (num1 < num2 && num2 < num3){
		printf("\n%d \n%d \n%d\n", num1, num2, num3);
		
	} else if (num1 < num3 && num3 < num2){
		printf("\n%d \n%d \n%d\n", num1, num3, num2);
		
	} else if (num2 < num1 && num1 < num3){
		printf("\n%d \n%d \n%d\n", num2, num1, num3);
		
	} else if (num2 < num3 && num3 < num1){
		printf("\n%d \n%d \n%d\n", num2, num3, num1);
		
	} else if (num3 < num1 && num1 < num2){
		printf("\n%d \n%d \n%d\n", num3, num1, num2);
		
	} else {
		printf("\n%d \n%d \n%d\n", num3, num2, num1);
	}
		
	return 0;
}
