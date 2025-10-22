#include<stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 Values: ");

    for(int i=0;i<10;i++) {
        scanf("%d", &arr[i]);
    }

    int max=arr[0], min=arr[0];

    for(int i =1;i<10;i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    int total = max - min;
    printf("Min is %d, Max is %d\n", min,max);
    printf("Min - Max is: %d", total);
}