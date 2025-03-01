#include<iostream>
using namespace std;
int main(){


	
	int salary,experience;
	cout<<"\nEnter you salary :";
	cin>>salary;
	cout<<"\nEnter you work experience :";
	cin>>experience;
	if((salary>=25000)||(salary>=20000&&experience>5))
	{
		cout<<"\nYou are eligible for loan\n";	
	}
	else
	cout<<"\nYou are not eligible for loan\n";
		
}
