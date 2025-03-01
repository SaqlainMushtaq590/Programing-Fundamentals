#include<iostream>
using namespace std;
 int main()
 {
 	int arrSize;
	cout<<" Enter size of array you want ";
	cin>>arrSize;
 	int arr[arrSize];
  	cout<<" Enter "<<arrSize<<" elements of array (using space) :";

   for(int i=0; i<arrSize; i++)
   {
   	 cin>>arr[i];
   }
	
	for(int i=arrSize-1 ; i>=0; i-- )
	{
		cout<<arr[i]<<" ";
	}
 }
