#include<iostream>
using namespace std;


int facto(int n)
{
	int factorial=1;
	
	for(int i=1; i<=n ; i++)
	{
		factorial=factorial*i;		
	}
	return factorial;
}

int main ()
{
	int a;
	cout<<" Enter a number to find Factorial :";
	cin>>a;
	if(a<0)
	{
		cout<<"The Factorial of this number doesn't exist !"<<endl;
	}
	else {
	cout<<"The factorial of "<<a<<" is = "<<facto(a)<<endl;
}
}















