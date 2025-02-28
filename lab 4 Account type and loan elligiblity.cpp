#include<iostream>
#include<iomanip>
using namespace std;
int main(){


	//    *******************************************----task no # 3 ----*****************************************************************


	cout<<"____________________________________________________________\n<<----- WELLCOM_____TO_____THE_____BANK____OF____SOFTWARE---->>\n";
	int x;
	cout<<setfill('*')<<setw(100);
	cout<<"\n*\tEnter your account balnce:\t ";
	cin>>x;
	cout<<setfill('*')<<setw(70)<<endl;
	cout<<"\n";
	(x<100)? cout<<"*\tyour account is low balance account \t\t\t   * ":(x>500)?cout<<"*\tyour account is premium account \t\t\t   *": cout<<"\t*your account is Standard account \t\t\t   *"<<endl;
	cout<<setfill('*')<<setw(70)<<endl;
	cout<<""<<endl;
	bool y;
	cout<<"*\tEnter 1 for loyal and 0 for non loyal\t\t\t    ";
	cin>>y;
	cout<<setw(110)<<setfill('*')<<setw(110)<<setfill('*')<<endl;
	(x>200)&&(y==1)? cout<<"\n\t\t you are elligible for special offer\n ":cout<<"\nyou are not elligeble\n";
	cout<<setw(70)<<setfill('*')<<"\n"<<setw(50)<<setfill('*')<<endl;
		
}
