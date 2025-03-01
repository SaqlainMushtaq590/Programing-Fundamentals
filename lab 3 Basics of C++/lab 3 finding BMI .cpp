#include<iostream>
#include<iomanip>
using namespace std;
int main()
{


	//-_________________________- program no 4. BMI -______________________________________-
	
	double w,h,BMI;
	cout<<"Enter your weight (in kg):"<<endl;
	cin>>w;
	cout<<"Enter your height (in meter):"<<endl;
	cin>>h;
	BMI=w/(h*h);
	cout<<"Your BMI is :"<<BMI<<endl;
	
}
