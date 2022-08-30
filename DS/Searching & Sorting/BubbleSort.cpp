#include<iostream>
using namespace std;
int main()
{
    int a[]={15,12,32,2,7},s,temp;
    for(int k=0;k<5-1;k++)
    {
       for(int s=0;s<5-k-1;s++)
       {
           if(a[s]>a[s+1])
                swap(a[s],a[s+1]);
       }


    }
    for(int j=0;j<5;j++)
    {
        cout<<a[j]<<" ";
    }
}
