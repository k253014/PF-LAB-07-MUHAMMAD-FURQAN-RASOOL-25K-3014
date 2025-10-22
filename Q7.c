#include<stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers: \n");
    for(int i =0;i<10;i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<10;i++) {
        
        for(int j=0;j<10;j++) {
            if((arr[i] == arr[j]) && (i != j))
            arr[j] = -1;
        }
    }

    for(int i =0;i<10;i++) {
        printf("%d\t", arr[i]);
    }
}