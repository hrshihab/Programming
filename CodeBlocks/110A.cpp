#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int rem,count=0;


    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        if(rem==4 || rem==7)
        {
            n=n/10;
        }

        else
        {
            count++;
            break;
        }
    }
    if(count==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
