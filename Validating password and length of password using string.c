#include <stdio.h>
#include <string.h>

int main()
{
    char password[6];

    printf("Username : Adhin\n");

    printf("Enter password : ");
    scanf("%s", password);

    if(strcmp(password, "adh946")==0 && strlen(password)== 6){
    printf("Login completed");
    }
    else{
        printf("password is incorrect");
        }

    return 0;
}
