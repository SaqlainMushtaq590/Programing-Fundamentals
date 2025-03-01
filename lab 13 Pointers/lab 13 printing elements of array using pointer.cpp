#include<iostream>
using namespace std;
 int main()
 {

 	int arr[3]={5,10,15};
 	int *ptr;
 	ptr=arr;
 	for(int i=0; i<3; i++)
 	{
 		cout<<*ptr<<endl;
 		ptr++;
	 }
		
}
