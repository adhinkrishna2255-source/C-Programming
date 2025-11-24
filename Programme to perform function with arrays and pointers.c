#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Function declarations
    void inputArray(int*arr,int n);
    void displayArray(const int*arr,int n);
    int sumArray (int*arr,int n);
    int countPositive(const int*arr,int n);
    int countNegative(const int*arr,int n);

    int main(void){
        int arr[100];
        int n,sum,posCount,negCount;
        printf("Enter the number of elements in the array(max 100):");
        if (scanf("%d",&n)!= 1 || n<0 || n>100)
        {
            puts("Invalid size.");
            return 1;
        }
        inputArray(arr,n);
        //Display array elements
        printf("\n Array elements are:");
        displayArray (arr,n);
         sum=sumArray(arr,n);
         printf("\n Sum of all elements = %d",sum);

         posCount=countPositive(arr,n);
         negCount=countNegative(arr,n);

         printf("\nNumber of positive elements=%d",negCount);
         printf("\nNumber of negative elements+%d\n",negCount);

    return 0;
}
void inputAarray(int*arr,int n){
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
            scanf("%d",arr+i);
    }
}

void displayAarray(const int*arr,int n){
    for(int i=0;i<n;i++){
            printf("%d",(arr+i));
    }
}

int suAarray(int*arr,int n){
int sum =0;
for (int i=0;i<n;i++){
        sum+= *(arr+i);
}
return sum;
}

int counPositive(const int*arr,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
            if(*(arr+i)>0)cnt++;
    }
    return cnt;
}
int counNegative(const int*arr,int n)
{
    int cnt=0;
    for(int i=0;i<n;i++){
            if(*(arr+i)<0)cnt ++;
    }
    return cnt;
}
}


