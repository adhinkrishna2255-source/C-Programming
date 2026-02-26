#include <stdio.h>
#include <string.h>

int main(){
    int ch;
    char str1[100];
    char str2[100];
    printf("Enter string1:");
    scanf("%s", str1);
    printf("Enter string2:");
    scanf("%s", str2);

    printf("\n1. Length of string 1");
    printf("\n2. Concatenate strings");
    printf("\n3. Copy string 1 to string 2\n");
    printf("\n4. compare strings");
    printf("Enter your choice:");
    scanf("%d", &ch);

    switch (ch){
        case 1:
            printf("Length of str1 : %lu\n", strlen(str1));
            break;
        case 2: strcat(str1, str2);
            printf("After concatenation: %s\n",str1);
            break;
        case 3: strcpy(str2,str1);
            printf("Copied string: %s\n");
            break;
        case 4:
            printf("Comparison result: %d\n", strcmp(str1,str2));
            break;
        default:
            printf("Your choice is invalid");
    }
        return 0;
        }
