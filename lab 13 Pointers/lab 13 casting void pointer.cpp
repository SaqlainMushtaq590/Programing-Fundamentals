#include<iostream>
using namespace std;
 int main()
 {

 	void *ptr;
 	int num1= 50;
 	ptr=&num1;
 	cout<<"Address : "<<(int *)ptr<<endl;
 	cout<<"Value : "<<*(int*)ptr<<endl;
 	
}
