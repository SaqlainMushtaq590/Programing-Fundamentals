#include<iostream>
using namespace std;
int main(){

	//======================================greatest of three======================================
	
	double a,b,c;
	cout<<" Enter three unmber to find the greatest one : ";
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<" The greatest unmber is "<<a<<endl;
	}
	if(b>a&&b>c){
		cout<<" The greatest number is "<<b<<endl;
	}
	if(c>a&&c>b){
		cout<<" The greatset number is "<<c<<endl;
	}

}
