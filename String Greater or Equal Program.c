#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10];
    char s2[10];
    printf("Enter string 1:");
    scanf("%s\n",&s1);
    printf("Enter string 2:");
    scanf("%s\n",&s2);
    int result=strcmp(s1,s2);
    if(result==0)
    {
        printf("strings are equal");
        }
        else if(result>0)
        {
            printf("First string is greater");
            }
            printf("second string is greater");

    return 0;
}
