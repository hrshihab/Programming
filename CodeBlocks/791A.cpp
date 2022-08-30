#include<iostream>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(1)
    {
        if(a==b)
        {
            count++;
            break;
        }
        else
        {
            a=a*3;
            b=b*2;
            count++;
            if(a>b) break;


        }
    }
    cout<<count;
    return 0;
}
