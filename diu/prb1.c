#include<stdio.h>
int main()
{
    int N,area=0,perimeter=0;
    printf("Enter a value:");
    scanf("%d",&N);
    area = N * N;
    perimeter = 2*(N+N);

    printf("Area= %d\nPerimeter=%d\n",area,perimeter);

    return 0;
}
