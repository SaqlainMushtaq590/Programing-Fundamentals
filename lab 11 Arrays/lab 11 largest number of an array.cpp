#include<iostream>
using namespace std;
 int main()
 {
 	int n;
 	cout<<"\nEnter the size of  array you want: ";
 	cin>>n;
	int arr[n];
 	int largest;
 	
 	cout<<"\n Enter the "<<n<<" elements of array:\n ";
 	for(int i=0; i<n; i++)
 	{
 		cin>>arr[i];
	 }
	 
	 for(int i; i<n; i++)
	 {
	 	if(arr[i]>largest)
	 	{
	 		largest=arr[i];
		 }
	 }
	 cout<<"\n The largest number is "<<largest;
 }
