#include<iostream>
using namespace std;

void insertionSort(int array[] , int size)
{
	for(int j=1;j<size;j++)
	{
		int key = array[j];
		int i = j-1;
		while(i>=0 && key<array[i])
		{
			array[i+1] = array[i];
			--i;
		}
		array[i+1]  = key;
	}
}

void printArray(int array[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<array[i]<<" ";
	}
}

int main()
{
	int array[] = {9,5,1,4,3};
//	for(int i=0;i<5;i++)
//	cin>>array[i];
	insertionSort(array,5);
	printArray(array,5);
}
