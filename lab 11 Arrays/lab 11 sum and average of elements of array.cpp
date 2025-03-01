#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int avarage;
	int arr[4]={2,4,6,8};
	for(int i=0; i<4; i++)
	{
		sum= sum+arr[i];
	}
	cout<<"The sum of all elements = "<<sum<<endl;
	cout<<"The average = "<<sum/4<<endl;
}
