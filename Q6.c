#include<stdio.h>

int main () {
	char words[50];
	int vowels=0, consonants=0, i;
	printf("Type the word: \n");
	
	scanf("%s",&words);
	
	for(i=0;i<100;i++) {
		if(words[i] != '\0'){
			if(words[i] == 'a' || words[i] == 'e' || words[i] == 'i' || words[i] == 'o' || words[i] == 'u' || words[i] == 'A' || words[i] == 'E' || words[i] == 'I' || words[i] == 'O' || words[i] == 'U'){
				vowels++;
			}
			else consonants++;
		}
		else break;
	}
	
	printf("Vowels: %d\nConsonants: %d", vowels,consonants);
	
	
	
}
