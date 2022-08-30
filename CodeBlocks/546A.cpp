#include<iostream>
using namespace std;
int main()
{
    int k,n,w,result=0,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        sum=sum+(i*k);
    }
    if(sum>n)
    {
        result=sum-n;
        cout<<result;
    }
    else
        cout<<result;
}
