#include<iostream>
using namespace std;
int main(){


	//=================================payroll==============================================================
		
		
	
	char grade;
	int service,basic_salary,gross_salary,bonus,tax,net_salary;
	cout<<"Enter your grade (a, b, c) :"<<endl;
	cin>>grade;
	cout<<"Enter years you have served :"<<endl;
	cin>>service;
	if(grade=='a')
	{
	basic_salary=50000;	
	}
	if(grade=='b')
	{
	basic_salary=30000;	
	}
	if(grade=='c')
	{
	basic_salary=20000;	
	}
	if(service>=10)
	{
		bonus=(10*basic_salary)/100;	
	}
	if(service>=5 && service<=9)
	{
		bonus=(5*basic_salary)/100;
	}
	if(service<5)
	{
		bonus=0;
	}
	gross_salary=basic_salary + bonus;
	if(gross_salary<30000)
	{
		tax=0;
	}
	if(30000<=gross_salary&&gross_salary<=40000)
	{
		tax=10*gross_salary/100;
	}
	if(gross_salary>40000)
	{
		tax=20*gross_salary/100;
	}
	net_salary=gross_salary - tax;
cout<<"   Your basic salary    : "<<basic_salary<<endl;
cout<<"   Your bonus is        : "<<bonus<<endl;
cout<<"   Your gross salary is : "<<gross_salary<<endl;
cout<<"   Tax deducted         : "<<tax<<endl;
cout<<"   Net salary           : "<<net_salary;

}
