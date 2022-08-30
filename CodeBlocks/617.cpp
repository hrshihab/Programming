#include<iostream>
using namespace std;
int main()
{
    int x,rem,div;
    cin>>x;
    div=x/5;
    rem=x%5;
    if(rem>0)div++;
    cout<<div;
}
