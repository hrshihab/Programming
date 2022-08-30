#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,count=0,b=3;
    cin>>n;
    int a[n*3];
    for(int i=0; i<n*3; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<3; i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[i+(b*j)];
        }
        if(sum==0) continue;

        else
        {
            count++;
            break;
        }
    }
    if(count==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}

