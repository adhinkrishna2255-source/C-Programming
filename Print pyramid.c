#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i= 1;i<= 9; i++){
            for(k=1; k<=(9-i)*4;k++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%d", i);
                if(j!=i){
                    printf("       ");
                }
            }
            printf("\n");
}

    return 0;
}

