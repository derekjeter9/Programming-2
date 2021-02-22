#include <stdio.h>
#include <stdlib.h>
int main() {

    int n1,n2,n3,n4,n5,sum;
    float avg;


    printf("Enter your first grade: ");
    scanf("%d",&n1);

    printf("Enter your second grade: ");
    scanf("%d",&n2);

    printf("Enter your third grade: ");
    scanf("%d",&n3);

    printf("Enter your fourth grade: ");
    scanf("%d",&n4);

    printf("Enter your fifth grade: ");
    scanf("%d",&n5);



    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5.0;

    printf("Average of your grade is %f",avg);

    return 0;

}
