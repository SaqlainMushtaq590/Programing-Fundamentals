#include<iostream>
using namespace std;
int main(){
	string username;
	string password;
	cout<<"Username :";
	cin>>username;
	cout<<"Password :";
	cin>>password;
	if(username=="admin" && password=="1234"){
		cout<<"Access Grnated"<<endl;
	}
	else if(username=="admin" && password!="1234" ){
		cout<<"Worng password"<<endl;
	}
	else if(username!="admin" && (password=="1234" || password!="1234")){
		cout<<"User not found"<<endl;
	}
	else{
		cout<<"User not found"<<endl;
	}
}
