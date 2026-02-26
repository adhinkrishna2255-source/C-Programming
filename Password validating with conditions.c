#include <stdio.h>
#include <string.h>

int main()
{
    char password[15];

    printf("Username : Adhin\n");

    printf("Enter password : ");
    scanf("%s", password);

    int c= strlen(password);
        if(c<8){
                printf("password is weak\n");
        }
        else if(c==8){
                printf("password is Moderate\n");
        }
        else if(c <=15 && c>8){
            printf("password is strong\n");
        }
        else if(c>15){
            printf("password contains more characters\n");
        }
        else{
            printf("password is invalid\n");
        }
        if(strcmp(password, "Adhin@946")==0){
    printf("Password is valid\n");
    }
    else{
        printf("password is invalid");
        }


    return 0;
}
