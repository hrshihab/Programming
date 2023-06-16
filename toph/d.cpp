#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[31623]={0};
    for(int i=2;i<=31623;i++)
    {
        if(arr[i]==0)
        {
            for(int j=2;i*j<=31623;j++)
            {
                arr[i*j]=1;
            }
        }
    }
    arr[1]=1;
    arr[0]=1;


long long int n,setBit=0;
cin>>n;

    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {

          if(binaryNum[j]==1) {
            if(arr[j]==1)
            {cout<<"Happy coding"<<endl;
            setBit++;
            break;

            }

        }
    }

        if(setBit==0) cout<<"Welcome to CSE Fest 2022"<<endl;

}






