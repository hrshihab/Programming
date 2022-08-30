#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[14]= {17,19,28,30,45,55,58,61,63,67,72,76,80,89},x,first=0,last=13,mid,index=-1;
    cout<<"Enter Target value: ";
    cin>>x;
    while(first<=last)
    {
        mid=(first+last)/2;
        if(x==a[mid])
        {
            index=mid;
            cout<<"Found at Index : "<<index;
            break;

        }
        else if(x<a[mid]) last=mid -1;
        else first = mid+1;
    }

    if(index==-1) cout<<"Not Found";




    getch();

}
