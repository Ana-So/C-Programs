#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("Char: ");
	scanf("%c", &c);
	
	if(c >= 65 && c <90){
		printf("\n%c\n", c+1);
	} else if(c == 90){
		switch(c){
			case 90: 
			printf("\nA\n");
			break;
		}
	} else if (c >= 97 && c <122){
		printf("\n%c\n", c+1);
	} else if(c == 122){
		switch(c){
			case 122: 
			printf("\na\n");
			break;
		}
	} else {
		printf("\nNot possible to code it.\n");
	}
	
	return 0;
}
