#include<iostream>
using namespace std;
int main()
{
    int n,a[14]= {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int count=0;
    cin>>n;

for(int i=0;i<14;i++)
{
    if(n%a[i]==0)
    {
        count++;
        break;
    }
}

    if(count==0) cout<<"NO";
    else cout<<"YES";
    return 0;
}

