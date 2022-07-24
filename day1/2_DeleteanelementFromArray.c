// delete an element from an array
#include <stdio.h>
int main(){
    printf("enter the limit of an array \n");
    int limit, j, element, position;
    scanf("%d", &limit);
    int arr[limit];
    
    printf("enter the elements of the array \n");
    for(int i = 0; i < limit; i++){
        scanf("%d", &arr[i]);
    }

    printf("enter the element to be deleted: ");
    scanf("%d", &element);

    for(int i = 0 ; i < limit; i++){
        if(arr[i] == element)
        {
            position = i;
            for(j = position; j< limit ;j++){
                arr[j] = arr[j+1];
            }
        }
    }

    // printing the new array
    for(int i = 0; i < limit-1; i++){
        printf("%d \n", arr[i]);
    }
}