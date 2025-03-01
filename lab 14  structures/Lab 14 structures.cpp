#include<iostream>
using namespace std;


//++++++++++++++++++++++++++++++++++++++++++++++ Task 1 function in struct ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


	struct stdname{
		string firstname;
		string lastname;
		int rollno;
		int marks;
	void displayStudentinfo(stdname stdname){
		cout<<"Full Name : "<<stdname.firstname<<" "<<stdname.lastname<<endl;
		cout<<"Marks : "<<stdname.marks<<endl;
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
	student1.displayStudentinfo(student1);
	student2.displayStudentinfo(student2);
}
	
	
	

	

