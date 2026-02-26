#include <stdio.h>
#include <stdlib.h>

int main()
{
    char path[200];
    printf("Enter the path of the file to  be opened: ");
    scanf("%s",&path);
    system(path);
    return 0;
}
