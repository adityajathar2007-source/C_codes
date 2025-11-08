#include<stdio.h>

int main()
{
    int arr[3]={2, 5, 6}, arr1[3]={5, 6, 7} ;
    
    printf("putting thr sub: ");

    for(int i=0; i<3; i++)
    {
        printf("\nthe sub of array: %d", arr[i]-arr1[i]);
    }

    return 0;



}