#include <stdio.h>
#include <stdlib.h>

struct Book{
    char Title[50];
    char Author[50];
    float Prize;
};
int main(){
    struct Book b1={"Adhin's Book", "Adhin", 15000};
    printf("Title: %s\n, Author: %s\n, Prize: %.2f\n", b1.Title, b1.Author, b1.Prize);
    return 0;
}
