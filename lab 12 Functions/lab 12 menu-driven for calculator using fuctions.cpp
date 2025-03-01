#include<iostream>
using namespace std;



	int add( int a, int b){
		return a+b;
	}
	
	int sub(int a, int b){
		return a-b;
	}
	
	int prod(int a , int b){
		return a*b;
	}
	
	int ratio( int a, int b){
		return a/b;
	}
	
int main(){
	int x,y;
	cout<<" enter the numbers  x and y :";
	cin>>x>>y;
	int choise;
	cout<<" enter 1 for addition"<<endl;
	cout<<" enter 2 for suntraction"<<endl;
	cout<<" enter 3 for multiplication"<<endl;
	cout<<" enter 4 for division"<<endl;
	cin>>choise;
	switch(choise){
		case 1:
			cout<<"sum of "<<x <<" and "<<y<<" = "<<add(x,y)<<endl;
			break;
		case 2:
			cout<<"difference of "<<x <<" and "<<y<<" = "<<sub(x,y)<<endl;
			break;
		case 3:
			cout<<"product of "<<x <<" and "<<y<<" = "<<prod(x,y)<<endl;
			break;
		case 4:
			cout<<"ratio of "<<x <<" and "<<y<<" = "<<ratio(x,y)<<endl;
			break;
	}
		
	}
