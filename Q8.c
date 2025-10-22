#include<stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    if((scanf("%99[^A-Za-z]", str)) ==1)
    printf("The non-alphabetical String is:\n%s",str);
    else printf("Alphabetical characters are not allowed!");
}