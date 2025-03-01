#include<iostream>
using namespace std;



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++ task 2 Array in struct +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	
struct stdname{
		string firstname;
		string lastname;
		int rollno;
		int marks;
		
	void displayStudentinfo(){
		cout<<"Full Name : "<<firstname<<" "<<lastname<<endl;
		cout<<"Marks : "<<marks<<endl;
	}
	};
	
int main(){
	//first srudnet
	stdname student1;
	student1.firstname="Saqlain";
	student1.lastname="Mushtaq";
	student1.rollno=35;
	student1.marks=88;
	//second student
	stdname student2;
	student2.firstname="Ajmal";
	student2.lastname="Hussain";
	student2.rollno=33;
	student2.marks=98;
	student1.displayStudentinfo();
	student2.displayStudentinfo();	
	//array 
	stdname std_data[2]={student1,student2};
	for(int i=0; i<2; i++)
	{
		std_data[i].displayStudentinfo();
	}
}




