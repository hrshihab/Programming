#include<stdio.h>
int main()
{
    int N,sum=0,avg=0,data; //declare variable and initial value to 0
    printf("Enter value for N:");
    scanf("%d",&N);
    printf("Enter data: \n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&data);
        sum = sum + data;
    }
    avg = sum/N;
    printf("Sum = %d\n",sum);
    printf("Avg = %d\n",avg);

    if(sum%2==0) printf("I Love Even\n");
    else printf("I Love Odd\n");

    return 0;

}
