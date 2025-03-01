#include<iostream>
using namespace std;
 int main()
 {


	int x=2;
	cout<<"Actual value of variable = "<<x<<endl;
 	int *ptr;
 	ptr=&x;
 	*ptr=4;    //chaning value of variable using pointer
 	cout<<"Modified value of variable= "<<x<<endl;
}
