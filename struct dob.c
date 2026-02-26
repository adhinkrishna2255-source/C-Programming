#include <stdio.h>
#include <stdlib.h>

struct Department{
    char cse[20];
    char it[20];
    char aiml[20];
    char data science[20];
    };

struct College{
    char name[20];
    char city[20;
    struct department[20];
    };

    int main(){
        struct College c1= {'Garden city","Bengaluru",{cse,it,aiml,data science}};
        printf("Name: %s\n", c1.name);
        printf("City: %s\n", c1.city);
        printf("Department: %s,%s,%s\n", c1.department.cse,c1.department.it,c1.department.aiml,c1.departmentt.data science);
        return 0;
    }


