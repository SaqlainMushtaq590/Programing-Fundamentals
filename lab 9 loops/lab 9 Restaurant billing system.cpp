#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;
int main(){



  
  	//========================================================Restaurant bill calculation================================================================================
	
	
	
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,5);
	cout<<setw(75)<<setfill(' ')<<"Well Come TO NOORI Restaurant"<<endl;
	SetConsoleTextAttribute(hConsole,7);
	char MainMenu,ch;
	int subMenu;
	double amount, Total;
	do{
		SetConsoleTextAttribute(hConsole,10);
		cout<<setw(75)<<setfill(' ')<<"\t\t press B for Breackfast \n\t\t press L for Lunch \n\t\t press D for Dinner  : ";
		SetConsoleTextAttribute(hConsole,7);
		cin>>MainMenu;
		switch(MainMenu){
			case 'B':
			case 'b':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Breakfats We Have following Menu:\n\t\t\t\t\t 1 for Anda Paratha (RS.40)\n\t\t\t\t\t 2 for Nan Channy (RS.60)	\n\t\t\t\t\t 3 for Siri Paye (RS.150)\n\t\t\t\t\t 4 for Tea (RS.15)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+= amount*40;
						cout<<Total;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*60;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*150;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"how much you need?"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*15;
						break;
					
			}
				break;
			case 'L':
			case 'l':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Lunch We Have following Menu:\n\t\t\t\t\t 1 for Chicken Karahi (RS.1050/kg)\n\t\t\t\t\t 2 for Mutton Karahi (RS.1800/kg)	\n\t\t\t\t\t 3 for Egg Fried Rice (RS.450/plate)\n\t\t\t\t\t 4 for BBQ (RS.1050/dozen)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Chicken Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" what amount of Mutton Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Egg Fried Rice would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*450;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of BBQ would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
				}		
				break;
			case 'D':
			case  'd':
				SetConsoleTextAttribute(hConsole,8);
				cout<<"\n\t\t\t\t\t For Dinner We Have Following Menu:\n\t\t\t\t\t 1 for Chicken Karahi (RS.1050/kg)\n\t\t\t\t\t 2 for Mutton Karahi (RS.1800/kg)	\n\t\t\t\t\t 3 for Egg Fried Rice (RS.450/plate)\n\t\t\t\t\t 4 for BBQ (RS.1050/dozen)\n\t\t\t\t\t 5 for Saji (RS.800/kg)"<<endl;
				SetConsoleTextAttribute(hConsole,7);
				cin>>subMenu;
				switch(subMenu){
					case 1:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amout of Chicken Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 2:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" what amount of Mutton Karahi would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 3:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<" What amount of Egg Fried Rice would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*450;
						break;
					case 4:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"What amount of BBQ would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*1050;
						break;
					case 5:
						SetConsoleTextAttribute(hConsole,14);
						cout<<setw(70)<<setfill(' ')<<"What amount of Saji would you like to order :"<<endl;
						SetConsoleTextAttribute(hConsole,7);
						cin>>amount;
						Total+=amount*800;
						break;
						}
						break;
			default:
				SetConsoleTextAttribute(hConsole,4);
				cout<<" \n\n\t\t\t Invalid data !!!\n \t\t\t please enter correct data."<<endl;
				SetConsoleTextAttribute(hConsole,7);
					return 0;
		}
		
		cout<<" \t\t\t\t\t Do you want to order somting else ?\n\t\t\t\t\t press y for (yes), n for (no) :";
		cin>>ch;
		cout<<endl;
		cout<<endl;
	}
	while(ch!='n');
	
	cout<<setw(70)<<setfill(' ')<<" Your Total bill is ="<<Total<<endl;
	cout<<"\n";
	cout<<"\n";
	
	
	
}
  
  
  	
	
	

