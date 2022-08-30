#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a="I love that ",a1="I love it",b="I hate that ",b1="I hate it";
    string newString="";
    int num;
    cin>>num;
    int i=0;
    while(num>i)
    {
        if(i+1==num)
        {
            if(i%2==0) newString=newString+b1;
            else newString=newString+a1;
        }
        else{
            if(i%2==0) newString=newString+b;
            else newString=newString+a;
        }
        i++;
    }
    cout<<newString;

   return 0;
}

