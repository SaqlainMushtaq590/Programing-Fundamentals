#include<iostream>
using namespace std;
int main(){
	
	cout<<"\n--------------------------WELCOM TO THE ATM of SE-----------------------------------\n";
	int balance,withdrawal,amountLeft;
	cout<<"\nEnter your toatal accout balanced :\n";
	cin>>balance;
	cout<<"\nEnter amount you want to withdraw :\n";
	cin>>withdrawal;
	if(withdrawal<=balance){
		amountLeft= balance-withdrawal;
		cout<<"\n your remaining blance is :"<<amountLeft<<endl;
	}
	else
	cout<<"\nIncufficient balance.\n";
	
	cout<<"\n^^^^^^^^^^^^^^^^^^^^^^^^^^THANK YOU FOR USING SE ATM^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
}
	
	
	
	

