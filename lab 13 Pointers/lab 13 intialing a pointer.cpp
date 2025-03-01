#include<iostream>
using namespace std;
 int main()
 {
 	int a=40;
 	int *ptr;     //declaration of variable
 	ptr=&a;        //initialing pointer
 	cout<<"Address: "<<ptr<<endl;  // printing address of variable by pointer
 	cout<<"Value: "<<*ptr;        //printing value by derefencing pointer
}
 	

