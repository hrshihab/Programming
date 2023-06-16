#include<stdio.h>
int main()
{
    int first[5],second[5],evenCount=0,oddCount=0;
    printf("Enter array elements:");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&first[i]);
        second[i] = first[i];

        if(second[i]%2==0) evenCount++;
        else oddCount++;
    }

    printf("First array = ");
    for(int j=0; j<5; j++)
    {
        printf("%d ",first[j]);
    }
    printf("\n");


    printf("Second array = ");
    for(int j=0; j<5; j++)
    {
        printf("%d ",second[j]);
    }
    printf("\n");
    if(evenCount>oddCount) printf("Even Win\n");
    else if(evenCount<oddCount) printf("Odd Win\n");
    else if(evenCount==oddCount) printf("Equal\n");

    return 0;

}
