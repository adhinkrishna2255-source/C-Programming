#include <stdio.h>
#include <stdlib.h>

typedef struct {
                int id;
                char name[50];
                float salary;
}
  Employee;

  int main() {
             Employee emp[3];
             int i, highestIndex = 0;
                 for(i = 0; i < 3; i++) {
              printf("\nEnter details for Employee %d:\n", i+1);
              printf("Enter ID: ");
              scanf("%d", &emp[i].id);
              printf("Enter Name: ");
              scanf("%s", emp[i].name);
              printf("Enter Salary: ");
              scanf("%f", &emp[i].salary);
    }
                for(i = 1; i < 3; i++) {
            if(emp[i].salary > emp[highestIndex].salary) {
            highestIndex = i;
        }
    }
              printf("\nEmployee with Highest Salary:\n");
              printf("ID: %d\n", emp[highestIndex].id);
              printf("Name: %s\n", emp[highestIndex].name);
              printf("Salary: %.2f\n", emp[highestIndex].salary);

    return 0;
}

