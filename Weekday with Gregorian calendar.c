#include <stdio.h>
#include <stdlib.h>
	
int main(int argc, char *argv[]) {
	
	int day, month, year, year0, month0, day0, x;
	
	printf("Date (mm/dd/aaaa): ");
	scanf("%d/%d/%d", &month, &day, &year);
	
	year0 = year - (14 - month) / 12;
	x = year0 + year0/4 - year0/100 + year0/400;
	month0 = month + 12 * ((14 - month) / 12) - 2;
	day0 = (day + x + 31*month0 / 12) % 7;
	
	switch(day0){
		case 0:
			printf("\nSunday\n");
			break;
		case 1: 
			printf("\nMonday\n");
			break;
		case 2: 
			printf("\nTuesday\n");
			break;
		case 3: 
			printf("\nWednesday\n");
			break;
		case 4: 
			printf("\nThursday\n");
			break;
		case 5:
			printf("\nFriday\n");
			break;
		case 6:
			printf("\nSaturday\n");
			break;
	}
	
	return 0;
}
