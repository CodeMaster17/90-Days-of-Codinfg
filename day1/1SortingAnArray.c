// write a program to sort an array
#include <stdio.h>
int main(){
    int n;
    printf("enter the limit of the array");
    scanf("%d" , &n);
    int a[n],i,temp;
    printf("enter the elements of the array");
    for(i = 0; i< n; i++){
        scanf("%d", &a[i]);
    }
    // sorting the array
    for(i = 0; i< n; i++)
    {
        if(a[i] > a[i+1]){
            temp = a[i+1];
            a[i+1]= a[i];
            a[i] = temp;
        }
    }
    // printing the array
     for(i = 0; i< n; i++){
        printf("%d ", a[i]);
    }
}