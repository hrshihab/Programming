#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    char temp;
    int n,t;
    cin>>n>>t;
    cin>>s;
    for(int j=0; j<t; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;

            }
        }
    }

    cout<<s;


    return 0;
}
