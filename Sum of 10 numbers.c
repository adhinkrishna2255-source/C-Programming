#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int sum= 0;

    for(i=0; i<=10;i++){
        printf("Enter the number %d", i);
        scanf("%d", &n);
        sum = sum+ n;
    }
    printf("sum of the 10 numbers is  %d\n", &sum);
    return 0;
}
