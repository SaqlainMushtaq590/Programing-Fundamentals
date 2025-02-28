#include<iostream>
using namespace std;
int main(){
	string	username;
	string password;
	cout<<"enter user name : ";
	cin>>username;
	cout<<"enter your passord : ";
	cin>>password;
	if(username=="admin" && password=="password123"){
		cout<<"\n \t authentication successful"<<endl;
	} 
	else if (username !="admin" ||password!="password123"){
		cout<<"\n \t authentication failed access denied"<<endl;
		return 0;
	}
	string role;
	cout<<"\nyour role : ";
	cin>>role;
	
	if(role=="admin"){
		cout<<"\n \t full Access"<<endl;
	}
	else if(role=="guest"){
		cout<<"\n \t Limited access"<<endl;
	}
	else{
		cout<<"\n \t no access"<<endl;
	}
}
	

