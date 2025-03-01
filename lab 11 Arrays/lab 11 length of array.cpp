#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,3,5,6,7,3};
	int length;
	for(int i=0; i<6; i++)
	{
		length=sizeof(arr)/sizeof(arr[1]);
	}
	cout<<"The length of array is = "<<length<<endl;
}
