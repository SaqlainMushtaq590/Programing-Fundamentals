#include<iostream>
using namespace std;
int main(){


	//======================================== factorial ==============================
	
	
	int a,factorial=1;
	cout<<" Enter a number to find Factorial :";
	cin>>a;
	while(a<0){
		cout<<"    Error!\n please try with a positive number.";
		cout<<" Enter a number to find Factorial :";
		cin>>a;
	}
	for(int i=1; i<=a; i++){
		factorial*=i;
	}
	cout<<"  Factorial of "<<a<<" = "<<factorial<<endl;
	
	
	
	
	
	
}
