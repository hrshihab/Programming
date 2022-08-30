#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    string word;
    int up=0,low=0;
    char s[100];
    cin>>word;

for(int i=0;i<word.length();i++)
{
if(word[i]>=65 && word[i]<=90)
     up++;

else low++;
}


if(up>low)
{
    for(int i=0;i<=word.length();i++)
         s[i]=toupper(word[i]);
            cout<<s;

}
else
{
    for(int i=0;i<=word.length();i++)
         s[i]=tolower(word[i]);
            cout<<s;

}


}
