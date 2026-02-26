#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,sum = 0;
    for(i=1; i<=10;i++){
        printf("Enter number %d:",i);
        scanf("%d", &n);
        sum= sum+n;
    }
    printf("Sum of the 10 numbers+%d\n", sum);
    return 0;
}
