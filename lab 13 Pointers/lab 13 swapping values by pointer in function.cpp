#include<iostream>
using namespace std;
     
    void modify(int *p, int *q)
    {
	int  i=*p;
      	*p=*q;
    
        *q=i;
	}
	
	int main()
	{
		int a,b;
		
		cout<<"Enter two numbers :";
		cin>>a>>b;
		
		cout<<" \n Before swapping "<<endl;
		cout<<"x = "<<a<<"\t y = "<<b<<endl;
		
		modify(&a,&b);	
		
		cout<<" \nAfter swapping  : "<<endl;
		cout<<"x = "<<a<<"\t y = "<<b<<endl;
	
	}
