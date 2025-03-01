
#include<iostream>
using namespace std;
int main(){


//===================================grades of marks============================================

	int g;
	cout<<" Enter you marks out of 100 : ";
	cin>>g;
	if(g>=90){
		cout<<" congratulations!\n\t your grade is A+ ";
	}
	if(g<90&&g>=80){
		cout<<" congratulations!\n\t your grade is A  ";
	}
	if(g<80&&g>=70){
		cout<<" congratulations!\n\t your grade is B ";
	}
	if(g<70&&g>=60){
		cout<<" congratulations!\n\t your grade is C ";
	}
	if(g<60){
		cout<<" Alash !\n\t you are fail ";
	}
}

