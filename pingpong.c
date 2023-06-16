#include<stdio.h>
int main()
{
    for(int row=1; row<=4; row++)
    {
        for(int col=1; col<=row; col++)
        {
            if(col%2==1) printf("ping ");
            else printf("pong ");
        }
        printf("\n");
    }
    return 0;
}
