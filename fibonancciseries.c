#include <stdio.h>
int main() {
    int n, t0, t1 = 0, t2 = 1, i;

    printf("enter the number:  ");
    scanf("%d", &n);


        for(i = 1; i <= n; ++i) {
        printf("%d, ", t1);
            t0 = t1 + t2;
            t1 = t2;
            t2 = t0;
        }
    return 0;
}
