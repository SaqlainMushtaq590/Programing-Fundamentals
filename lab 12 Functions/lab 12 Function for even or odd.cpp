#include<iostream>
using namespace std;


	void even_or_odd (int a){
		if(a%2==0){
		cout<<"Even";
	}
		else
		cout<<"Odd";
	}
	int main(){
		int a;
		cout<<"enter the number :";
		cin>>a;
		even_or_odd(a);
		}

