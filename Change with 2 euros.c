#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	double amount;
	
	printf("Amount (max 2 euros): ");
	scanf("%lf", &amount);
	
	if(amount > 2.00){
		printf("\nInvalid amount (max 2 euros)\n");
	}
	else{
		printf("\n%d 50 cent coins", (int) (amount / 0.50));
		printf("\n%d 20 cent coins", (int) (amount / 0.20) );
		printf("\n%d 10 cent coins", (int) (amount / 0.10) );
		printf("\n%d 5 cent coins", (int) (amount / 0.05) );
		printf("\n%d 2 cent coins", (int) (amount / 0.02) );
		printf("\n%d 1 cent coins\n", (int) (amount / 0.01) );
	}
	
	return 0;
}
