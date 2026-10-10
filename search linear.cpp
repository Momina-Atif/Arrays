#include<iostream>
#include<conio.h>
#include<windows.h>
#include<String.h>
using namespace std;
int main()
{
int n,loc=-1;
	int arr[5]={10,11,12,13,14};
	cout<<"Enter any value: ";
	cin>>n;
	for(int i=0;i<=4;i++)
	{
		if(arr[i]==n)
		{
		loc=i+1;
	    }
	}
	if(loc==-1)
	{
	cout<<"Value not found";
    }
	else
	{
	cout<<"Values of Index is: "<<loc;
    }
return 0;
}

