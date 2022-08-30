#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;
    int num,num1=0,num2=0;
    cin>>num;
    while(num!=0)
    {
       int  d = num % 10;
        if(d!=0);
        v.push_back(d);
        num = num/10;

    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
      if(i%2==0)
      num1 = num1*10 + v[i];
      else
      num2 = num2*10 + v[i];
    }

  cout<<num1+num2;
}
