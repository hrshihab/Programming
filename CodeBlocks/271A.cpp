#include<iostream>
using namespace std;
int main()
{
    int n,count=0,m,a[4];
    cin>>n;
    while(1){
        n+=1;
        m=n;
        count=0;
        for(int j=0; j<4; j++)
        {
            a[j]=m%10;
            m=m/10;
        }
//        if (a[0] != a[1] && a[0] != a[2] && a[0] != a[3] && a[1] != a[2] && a[1] != a[3] && a[2] != a[3])
//        {
//            break;
//        }
        for(int k=0; k<3; k++)
        {
            for(int l=k+1; l<4; l++)
            {
                if(a[k]!=a[l]) count++;
            }
        }
        if(count==6)
        {
            cout<<n;
            break;
        }
    }
    //cout<<n;


    return 0;
}
