// merge two arrays
#include <stdio.h>
int main(){
    int limit1, limit2, i, j;
    printf("Enter the limit of the first array");
    scanf("%d", &limit1);
    printf("Enter the limit of the seccond array");
    scanf("%d", &limit2);

    int ar1[limit1], ar2[limit2], result[limit1 + limit2];

    // taking input of first array
    printf("enter the elements of the frist array");
    for(i = 0 ; i< limit1; i++){
        scanf("%d", &ar1[i]);
    }

    // taking input for the second array
    printf("enter the elements of the frist array");
    for(i = 0 ; i< limit2; i++){
        scanf("%d", &ar2[i]);
    }

    for(i = 0; i < (limit1 + limit2); i++ ){
        if(i < limit1){
            result[i] = ar1[i];
        }
        else
        {
            result[i] = ar2[i - limit1]; 
        }
    }

    // printing merged array
      printf("elements of the merged array are:");
    for(i = 0 ; i< (limit1+ limit2); i++){
        printf("%d\n", result[i]);
    }
}