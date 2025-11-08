#include<stdio.h>
#include<string.h>
int main ()
{
    int n;
    printf("Enter the number \n");
    scanf("%d", &n);
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%d " , j);
        }
        printf("\n");
    }
    return 0;
}