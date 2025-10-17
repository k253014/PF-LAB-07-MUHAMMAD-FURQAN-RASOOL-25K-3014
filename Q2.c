#include<stdio.h>

int main() {
	int inp;
	int numbers[10];
	int i, occur=0;
	for(i=0;i<10;i++) {
		printf("Enter a number: ");
		scanf("%d", &numbers[i]);
	}
	printf("Enter the number you want ot search: ");
	scanf("%d", &inp);
	for(i=0;i<10;i++) {
		if(numbers[i] == inp){
			occur++;
		}
		
	}
	
	if(occur == 0) printf("Number not found!");
	else printf("The number %d occured %d times!", inp,occur);
}
