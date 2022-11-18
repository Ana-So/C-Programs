#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int num, u, d;
	
	printf("Number between 0 and 100: ");
	scanf("%d", &num);
	
	d = num / 10;
	u = num % 10;
	
	if (d == 0 & u == 0){
		printf("\nZero\n");
		} else
	if (num == 100){
		printf("\nOne hundred\n");
	} else
	if (d != 0 || u != 0){
		switch(d){
			case 1 : 
					switch(u){
						case 0 : printf("\nTen\n");
							break;
						case 1 : printf("\nEleven\n");
							break;
						case 2 : printf("\nTwelve\n");
							break;
						case 3 : printf("\nThirteen\n");
							break;
						case 4 : printf("\nFourteen\n");
							break;
						case 5 : printf("\nFifteen\n");
							break;
						case 6 : printf("\nSixteen\n");
							break;
						case 7 : printf("\nSeventeen\n");
							break;
						case 8 : printf("\nEighteen\n");
							break;
						case 9 : printf("\nNineteen\n");
							break;					
					}
				break;
				
			case 2 : printf("\nTwenty");
				break;
			case 3 : printf("\nThirty");
				break;
			case 4 : printf("\nForty");
				break;
			case 5 : printf("\nFifty");
				break;
			case 6 : printf("\nSixty");
				break;
			case 7 : printf("\nSebenty");
				break;
			case 8 : printf("\nEighty");
				break;
			case 9 : printf("\nNinety");
				break;
		}

		if(d != 1)
			switch(u){
			case 1 : printf(" One\n");
				break;
			case 2 : printf(" Two\n");
				break;
			case 3 : printf(" Three\n");
				break;
			case 4 : printf(" Four\n");
				break;
			case 5 : printf(" Five\n");
				break;
			case 6 : printf(" Six\n");
				break;
			case 7 : printf(" Seven\n");
				break;
			case 8 : printf(" Eight\n");
				break;
			case 9 : printf(" Nine\n");
				break;
		}
	}
	
	return 0;
}
