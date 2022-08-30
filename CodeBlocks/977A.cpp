#include<iostream>
using namespace std;
int main()
{
    int n,k,res,rem;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        res=n/10;
        rem=n%10;
        if(rem==0) n=res;
        else n=n-1;

    }
    cout<<n;

}
