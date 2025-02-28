#include<iostream>
using namespace std;
int main(){
//	int a;
//	cout<<"enter an integer";
//	cin>>a;
//	if(a>0){
//		cout<<" the integer you entered is positive";
//	}
//	else if(a<0){
//		cout<<" The integer you entered is negative";
//	}
//	else{
//		cout<<"The integer you entered is zero";
//	}


	double temp;
	cout<<"enter temperature ";
	cin>>temp;
	if(temp>=40){
		cout<<" please stay indoor because it is too hot and could be dangreous to health "<<endl;
	}
	else if (39>=temp>=30){
		cout<<"Please drink plenty of water to stay hydarated in the hot weather   "<<endl;
	}
	else if (29>=temp>=20){
		cout<<"waoo the weather is plessant and suitable for outdoor avtivites"<<endl;
	}
	else{
		cout<<" wear warm clothes to stay comfortable in the cooler weather"<<endl;
	}
	return 0;
}
	
	
		

