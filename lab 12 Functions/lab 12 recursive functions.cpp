# include<iostream>
#include<stdlib.h>// libarory for function recursion
using namespace std;
                                 //function recursion

	int factorial(int n){
		if(n<=1){ //base condition
		
		return 1;
	}
		else
		return n*factorial(n-1);//recursive function
	}
	
	int main() //main function
	{
		cout<<"Enter a number to find factorial: ";
		int x;
		cin>>x;
		cout<<"the factorial of "<<x<<"= "<<factorial(x);// function calling
	}
