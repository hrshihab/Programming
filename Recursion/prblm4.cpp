#include<bits/stdc++.h>
using namespace std;
void fun(int i,int n)
{
    if(i<n)
    {
        if(i==0) cout<<"1"<<" + ";
        else if(i==1) cout<<"x"<<" + ";
        else cout<<"x^"<<i<<" + ";
        fun(i+1,n);
    }
}
int main()
{
    int n;
    cin>>n;
    fun(0,n);
    cout<<endl;
    return 0;
}

