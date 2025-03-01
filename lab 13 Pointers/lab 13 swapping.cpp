#include<iostream>
using namespace std;
 int main()
 {

 	int a=5, b=10;
 	int *ptr;
 	int *sin;
 
 	cout<<"Vale before swaping\n";
	cout<<"x= "<<a<<endl<<"y= "<<b<<endl;
 
 	ptr=&a ;
 	sin=&b;
 	int tem=*ptr;
 	*ptr=b;
 	*sin=tem;
 
 	cout<<"values after swapping\n";
 	cout<<"x= "<<a<<endl<<"y= "<<b;
}
