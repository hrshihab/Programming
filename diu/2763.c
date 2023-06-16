#include<stdio.h>
int main()
{
    char arr[20];
    for(int i=0; i<14; i++)
    {
        scanf("%c",&arr[i]);
    }

    for(int i=0; i<14; i++)
    {
        if(arr[i]=='.'||arr[i]=='-')  printf("\n");

        else printf("%d",arr[i]-48);

    }

    printf("\n");
    return 0;

}
