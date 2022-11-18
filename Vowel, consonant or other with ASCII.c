#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char c;
	
	printf("Char: ");
	scanf("%c", &c);	
	
	if(c >= 65 && c <= 90){
		switch (c){
		case 'A': 
			printf ("\nVowel\n");
			break;
		case 'E': 
			printf ("\nVowel\n");
			break;
		case 'I': 
			printf ("\nVowel\n");
			break;
		case 'O': 
			printf ("\nVowel\n");
			break;
		case 'U': 
			printf ("\nVowel\n");
			break;
		default: 
			printf("\nConsonant\n");
	} }else if(c >= 97 && c <= 122){
		switch (c){
		case 'a': 
			printf ("\nVowel\n");
			break;
		case 'e': 
			printf ("\nVowel\n");
			break;
		case 'i': 
			printf ("\nVowel\n");
			break;
		case 'o': 
			printf ("\nVowel\n");
			break;
		case 'u': 
			printf ("\nVowel\n");
			break;
		default: 
			printf("\nConsonant\n");
} }else {
	printf("\nSpecial char\n");
}
	
	return 0;
}
