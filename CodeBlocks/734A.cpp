#include<iostream>
using namespace std;
int main()
{
    int n,antonWin=0,danikWin=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='A') antonWin++;
            else danikWin++;
    }
    if(antonWin>danikWin) cout<<"Anton";
    else if(antonWin<danikWin) cout<<"Danik";
    else cout<<"Friendship";

   return 0;
}
