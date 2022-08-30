#include<iostream>
using namespace std;
int main()
{
    int a[]={9,8,1,4,7,3,6,2,5},small_index,temp,n=0;
    for(int i=0;i<9;i++)
    {
        small_index=i;
        for(int j=i+1;j<9;j++)
        {
            if(a[j]<a[small_index]) small_index=j;
        }

        temp=a[i];
        a[i]=a[small_index];
        a[small_index]=temp;
    }
    while(n<9)
    {
        cout<<a[n]<<" ";
        n++;
    }

}
