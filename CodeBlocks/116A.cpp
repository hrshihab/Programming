#include<iostream>
using namespace std;
int main()
{
    int n,left=0,high=0;
    cin>>n;
    int size=(n*2)+1;
    int a[size];
    for(int i=0; i<n*2; i++)
    {
        cin>>a[i];
    }

    for(int j=0; j<n*2; j++)
    {
        left=left-a[j]+a[j+1];
        j++;

        if(high<left)
        {
            high=left;
        }
    }

    cout<<high;
}
