#include<stdio.h>

int main() {
    char str[100];

    printf("Enter a String: ");
    scanf("%[^\n]", str);
    int i=0;
    while(!(str[i] =='\0')) {
        if((str[i] >='A') && (str[i] <='Z')) {
            str[i] = (char)((int)str[i] + 32);
        }
        else if(str[i] >='a') {
            str[i] = (char)((int)str[i] - 32);
        }
        i++;
    }

    printf("%s",str);
}