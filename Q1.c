#include <stdio.h>

int main()
{
	int n,i;
	printf("Enter Size: ");
	scanf("%d", &n);
	int arr[n];
	for( i=0;i<n;i++) {
	    if(i ==n-1) {
	        scanf("%d", &arr[0]);
	    }else {
	        scanf("%d", &arr[i+1]);
	    }
	}
	
	for( i=0;i<n;i++) {
	    printf("%d ", arr[i]);
	}
	return 0;
}



