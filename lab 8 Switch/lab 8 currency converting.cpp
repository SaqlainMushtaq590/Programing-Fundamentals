#include<iostream>
using namespace std;

int mian()
{


//================================================================== Currency converter ============================================================

	double currency,amount;
	int converter;
	cout<<" press 1 to convert US to PKR "<<endl;
	cout<<" press 2 to convert US to INR "<<endl;
	cout<<" press 3 to convert US to Euros :";
	cin>>converter;
	switch(converter){
		case 1:
			cout<<"\n Enter the US amount you want to convert in PKR :";
			cin>>amount;
			currency=amount*278.78;
			cout<<"\n The amount you entered is "<<currency<<" PKR"<<endl;
			break;
		case 2:
			cout<<"\n Enter the US amount you want to convert in INR :";
			cin>>amount;
			currency=amount*86.34;
			cout<<"\n The amount you entered is "<<currency<<" INR"<<endl;
			break;
		case 3:
			cout<<"\n Enter the US amount you want to convert in Euros :";
			cin>>amount;
			currency=amount* 0.8091;
			cout<<"\n The amount you enered is "<<currency<<" Euros";
			break;
		default :
			cout<<"\n Invalid data \n please enter valid data and try again ";
	}
}
