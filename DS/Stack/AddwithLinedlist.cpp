#include<iostream>
#include<conio.h>
using namespace std;
struct node{
int data;
node *next;
};

int main()
{
    node *nptr,*topptr;

    int top=-1,item,m,left;
    cout<<"Enter memory size: ";
    cin>>m;
    left=m;
    topptr=NULL;


jump:
    if(top<m-1)
    {
        top++;
        cout<<"Memory size left: "<<left--<<endl;
        cin>>item;
        nptr=new(node);
        nptr->data=item;
        nptr->next=NULL;

        if (topptr==NULL)
        {
            topptr=nptr;
        }
        else
        {
            nptr->next=topptr;
            topptr=nptr;
        }
        goto jump;
    }

    else
    {
        cout<<"Not Enough Memory!\n";
    }

    cout<<"Stored Value is: ";

    while(topptr!=NULL)
    {
        cout<<topptr->data<<" ";
        topptr=topptr->next;
    }
    getch();

}
