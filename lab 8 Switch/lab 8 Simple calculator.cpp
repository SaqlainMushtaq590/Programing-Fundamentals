
#include<iostream>
using namespace std;

int mian()
{



	//================================================calculator=================================================================
	
	
	double a,b;
	char operators;
	cout<<" Enter two number to perform calculation\n";
	cin>>a>>b;
	cout<<"\nEnter operator to perform operation (+,-,*,/)\n";
	cin>>operators;
	switch(operators){
		case'+':
			cout<<" you performed addition "<<a<<"+"<<b<<"= "<<a+b<<endl;
			break;
		case'-':
			cout<<" your performed subraction "<<a<<"-"<<b<<"= "<<a-b<<endl;
			break;
		case'*':
			cout<<" you preformed multiplication "<<a<<"*"<<b<<"= "<<a*b<<endl;
			break;
		case'/':
			cout<<" you performed division "<<a<<"/"<<b<<"= "<<a/b<<endl;
			break;
			default:
				cout<<"\n incorrect data entry !\n please try again "<<endl;
	}
	
	
}
