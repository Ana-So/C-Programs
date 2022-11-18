#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int birth_day, birth_month, birth_year, current_day, current_month, current_year, age;
	
	printf("Date of birth (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &birth_month, &birth_day, &birth_year);
	
	fflush(stdin);
	printf("Current date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &current_month, &current_day, &current_year);
	
	if(current_month > birth_month){
		age = current_year - birth_year;
	}

	else if(current_month == birth_month){
		
		if(current_day >= birth_day){
			age = current_year - birth_year;
		}
		else{
			age = current_year - birth_year - 1;
		}
	}
	
	else{
		age = current_year - birth_year - 1;
	}
	
	printf("\nAge: %d years old.\n", age);
	
	return 0;
}
