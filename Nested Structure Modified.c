#include <stdio.h>
#include <stdlib.h>

struct marks{
    int maths;
    int physics;
    int co;
};
struct Student{
    int id;
    char name[20];
    struct marks;
};
int main(){
    struct Student s1={101,"Kiran",{50,60,70}};
    printf("Name:%s\n",s1.name);
    printf("marks:\n maths:%d\n physics:%d\n co:%d\n",s1.maths,s1.physics,s1.co);
    return 0;
}
