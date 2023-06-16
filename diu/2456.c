#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    if(arr[0]<arr[1] && arr[1]<arr[2] && arr[2]<arr[3]&& arr[3]<arr[4]) printf("C\n");
    else if(arr[0]>arr[1] && arr[1]>arr[2] && arr[2]>arr[3]&& arr[3]>arr[4]) printf("D\n");
    else printf("N\n");
    return 0;
}
