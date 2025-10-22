#include<stdio.h>

int main() {
    int i=0, max_students =10;
    int passed[max_students], failed[max_students]; 
    int pass=0,fail=0;
    
    while(i < max_students) {
        int inp;
        printf("Enter a number: ");
        scanf("%d", &inp);

        if(inp == -1) {
            break;
        }
 
        if((inp < 0) || (inp > 10)) {
            printf("Not a valid number! Try Again\n");
            continue;
        }

        if((inp >=0) && (inp <=5)) {
            failed[fail] = inp;
            fail++;
        }
        else if((inp >5) && (inp <=10)) {
            passed[pass] = inp;
            pass++;
        }
        i++;
    }
    float passed_average=0, failed_average=0;
    printf("Passed Student Array: \n");
    for(i=0;i<=pass-1;i++) {
        printf("%d\t",passed[i]);
        passed_average += passed[i];
    }
    printf("\n");
    passed_average = passed_average/(pass+1);
    printf("Passed Students average: %.2f\n",passed_average);

    printf("Failed Student Array: \n");
    for(i=0;i<=fail-1;i++) {
        printf("%d\t",failed[i]);
        failed_average += failed[i];
    }
    printf("\n");

    failed_average = failed_average/(pass+1);
    printf("Failed Students average: %.2f\n",failed_average);
}