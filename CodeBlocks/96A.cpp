#include<iostream>
using namespace std;
int main()
{
    string num;
    int count;
    cin>>num;

    if(num.length()<7) cout<<"NO";
    else
    {
        for(int i=0; i<num.length(); i++)
        {
            if(num[i]==num[i+1])
            {
                count++;
                if(count>=6)
                {
                    cout<<"YES";
                    break;
                }
            }
            else if (num[i]!=num[i+1]) count=0;
        }

        if(count<6) cout<<"NO";
    }
}
