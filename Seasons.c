#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int day, month;
	
	printf("Date (mm/dd/yyyy): ");
	scanf("%d/%d", &month, &day);
	    
	//Spring
	if((month == 3 && day >= 21) || (month > 3 && month < 6) || (month == 6 && day <= 20)){
		printf("\nSpring\n");
	}
		
	//Summer
	else if((month == 6 && day >= 21) || (month > 6 && month < 9) || (month == 9 && day <= 20)){
		printf("\nSummer\n");
	}
	
	//Autumn
	else if((month == 9 && day >= 21) || (month > 9 && month < 12) || (month == 12 && day <= 20)){
		printf("\nAutumn\n");
	}
	
	//Winter
	else if((month == 12 && day >= 21) || (month < 3) || (month == 3 && day <= 20)){
		printf("\nWinter\n");
	}
	
	else{
		printf("\nError!");
	}
	
		
	return 0;
}
