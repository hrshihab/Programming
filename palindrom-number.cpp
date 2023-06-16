
#include<bits/stdc++.h>
using namespace std;
//bool isPalindrome(int x) {
//        int rem,sum=0,res;
//        while(x/10!=0)
//        {
//            rem = x % 10;
//            res = x / 10;
//            sum = sum * 10 + rem;
//
//        }
//        if(sum==x) return true;
//        else return false;
//    }
int main()
{
    int x;
    cin>>x;
   // bool res=isPalindrome(x);
 cout<<"output:";
       int rem=0,sum=0,res=0;
       int xx=x;
        while(1)
        {
            rem = xx%10;
            res = xx/10;
            xx = res;

            sum = sum*10+rem;
            if(res == 0) break;


        }

        if(sum==x && x>=0) cout<<"treu"<<endl;
        else cout<<"false"<<endl;
   // cout<<res<<endl;
    return 0;
}
