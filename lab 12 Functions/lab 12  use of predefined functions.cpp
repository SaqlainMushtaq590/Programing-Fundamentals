
#include<iostream>
#include<cmath>
using namespace std;
	
int main(){


	int squareroot,num1,sinnum,cosnum,absolute;
	cout<<" enter a number to find square root "<<endl;
	cin>>squareroot;
	cout<<" enter a number to find its cube  "<<endl;
	cin>>num1;
	cout<<" enter the angle to find sin of the angle "<<endl;
	cin>>sinnum;
	cout<<" enter the angle to find cos of the angle "<<endl;
	cin>>cosnum;
	cout<<" enter the number to find absoluter value"<<endl;
	cin>>absolute;
	
	cout<<"the sqrare root is = "<<sqrt(squareroot)<<endl;
	cout<<"the cobe of "<<num1<<"= "<<pow(num1,3)<<endl;
	cout<<"the absolute value = "<<abs(absolute)<<endl;
	cout<<"sin of"<<sinnum<<"= "<<sin(sinnum)<<endl;
	cout<<"cos of "<<cosnum<<"= "<<cos(cosnum)<<endl;

}

