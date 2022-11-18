#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double hours, hourly_pay, salary, extra_hours = 0;
	
	printf("Work hours per week: ");
	scanf("%lf", &hours);
	
	fflush(stdin);
	printf("Payment per hour: ");
	scanf("%lf", &hourly_pay);
	
	if(hours > 40){
		extra_hours = hours - 40.0;
	}
	
	salary = ((30.0 / 7.0) * 40 * hourly_pay) + ((30.0 / 7.0) * extra_hours * hourly_pay * 1.5);
	
	printf("\nMonthly salary: %.2lf$\n", salary);
	
	return 0;
}
