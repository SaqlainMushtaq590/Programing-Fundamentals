#include<iostream>
#include<iomanip>
using namespace std;
int main()
{	//-_______________________-program no 1. shopping bill-______________________-

	double item1=12.95;
	double item2=24.95;
	double item3=6.95;
	double item4=14.95;
	double item5=3.95;
	double subtotal= item1+item2+item3+item4+item5;
	double saletax=subtotal/100*6;
	
	cout<<"price of item 1 : $"<<item1<<endl;
	cout<<"price of item 2 : $"<<item2<<endl;
	cout<<"price of item 3 : $"<<item3<<endl;
	cout<<"price of item 4 : $"<<item4<<endl;
	cout<<"price of item 5 : $"<<item5<<endl;
	cout<<"sobtotal        : $"<<subtotal<<endl;
	cout<<"sale tax(6%)    : $"<<saletax<<endl;
	cout<<"Total           : $"<<subtotal+saletax<<endl;
	
	return 0;

}
