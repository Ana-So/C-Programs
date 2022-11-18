#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  

int main(int argc, char *argv[]) {
	
	int day, month, year;
	bool leap_year = false; // include stdbool.h
	
	printf("Date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	if(year % 4 == 0){
		if(year % 100 == 0){  
			if(year % 400 == 0){  
				leap_year = true;
			}
			else{
				leap_year = false;
			}	
		}
		else{
			leap_year = true;
		}
	}
	else{
		leap_year = false;
	}
	
	
	if(day >= 1 && day <= 31 && (month == 1 || month == 3 || month == 5 || month  == 7 || month == 8 || month == 10 || month == 12)){
		printf("\nValid Date.\n");
	}
	else if(day >= 1 && day <= 30 && (month == 4 || month == 6 || month == 9 || month == 11)){
		printf("\nValid Date.\n");
	}
	
	
	
	else if(leap_year && day >= 1 && day <= 29 && month == 2){
		printf("\nValid Date.\n");
	}
	else if(!leap_year && day >= 1 && day <= 28 && month == 2){
		printf("\nValid Date.\n");
	}
	else{
		printf("\nNot a valid date.\n");
	}
	
	return 0;
}
