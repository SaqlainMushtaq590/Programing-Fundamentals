#include<iostream>
using namespace std;

int mian(){

	//====================================================Days of a Week============================================================
	
	
	int days;
	cout<<" select any number from 1 to 7 :";
	cin>>days;
	
	switch(days){
		case 1:
			cout<<" \nIt is Monday \n";
			break;
		case 2:
			cout<< "\n It is Tuesday \n";
			break;
		case 3:
			cout<<" \n It is wednesday \n";
			break;
		case 4:
			cout<<"\n It is Thrusday \n";
			break;
		case 5:
			cout<<"\n It is Friday \n";
			break;
		case 6:
			cout<<"\n It is Saturday \n";
			break;
		case 7:
			cout<<"\n It is Sunday \n";
			break;
		default : cout<<" You typed wrong number. Try again !";
	}
	
	
}
