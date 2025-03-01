#include<iostream>
#include<iomanip>
using namespace std;
int main()
{



	//-_______________________-program no 3. calculator-_________________________-
	
int a,b;
cout<<"enter the numbers :"<<endl;
cout<<"number 1 :"<<endl;
cin>>a;
cout<<"number 2 :"<<endl;
cin>>b;

int addition=a+b;
int subtraction=a-b;
int multiplication=a*b;
int division=a/b;
int moduls=a%b;

cout<<"Addition      \n\t"<<a<<"+"<<b<<"="<<addition<<endl;
cout<<"Subtraction   \n\t"<<a<<"-"<<b<<"="<<subtraction<<endl;
cout<<"Multiplication\n\t"<<a<<"x"<<b<<"="<<multiplication<<endl;
cout<<"Division      \n\t"<<a<<"/"<<b<<"="<<division<<endl;
cout<<"Moduls        \n\t"<<a<<"%"<<b<<"="<<moduls<<endl;

}

