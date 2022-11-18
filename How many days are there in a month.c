#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int month, year;
	
	printf("Month number: ");
	scanf("%d", &month);
	
	fflush(stdin);
	printf("Year: ");
	scanf("%d", &year);
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
		printf("\nMonth has 31 days.\n");
	} else if (month == 4 || month == 6 || month == 9 || month == 11){
		printf("\nMonth has 30 days.\n");
	}else if (year%4==0 && year%100!=0 && month == 2){
			printf("\nMonth has 29 days.\n");
	} else if (year%4!=0 && year%100!=0 && month == 2){
		printf("\nMonth has 28 days.\n");
	} else{
		printf("Error!");
	}
	
	return 0;
}
