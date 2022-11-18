#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int year;
	
	printf("Year: ");
	scanf("%d", &year);
	
	if (year%4==0 || year%100==0 && year%400!=0){
		printf("\nLeap Year.\n");
	} else {
		printf("\nCommon Year.\n");
	}
	
	return 0;
}
