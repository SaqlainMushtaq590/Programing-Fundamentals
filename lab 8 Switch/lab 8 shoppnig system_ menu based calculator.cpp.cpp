#include<iostream>
using namespace std;
int main(){
	
	
	//==================================================shopping system======================================================================
	
	
	
	int quantity,total,discount,NetPrice;
	
	cout<<"choose category"<<endl;
	char category;
	cout<<" enter E for electronics";
	cout<<"\n enter C for clothing ";
	cout<<"\nenter G for groceries ";
	cin>>category;
	
	switch (category){
		case 'E':
			cout<<"electronics"<<endl;
			int electronics;
			cout<<" enter \n 1 for laptop : Rs 1000 \n 2 for smartphone : Rs 700 \n 3 for headphones : Rs 150";
			cin>>electronics;
			switch(electronics){
				case 1:
					cout<<"how may items you like to buy "<<endl;
					cin>> quantity;
					total=quantity*1000;
					break;
				case 2:
					cout<<"how may items you like to buy "<<endl;
					cin>>quantity;
					total=quantity*700;
					break;
				case 3:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*150;
					break;	
					
			}
			break;
		case 'C':
			cout<<"clothing"<<endl;
			int	clothing;
			cout<<" enter \n 1 for jacket : Rs 120 \n 2 for t-shirt : Rs 40\n 3 for jeans : Rs 60"<<endl;
			cin>>clothing;
			switch(clothing){
				case 1:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*120;
					break;
				case 2:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*40;
					break;
				case 3:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*60;
					break;		
			}
			break;
		case 'G':
			cout<<"groceries"<<endl;
			int groceries;
			cout<<" enter \n 1 for malik : Rs 2\n 2 for bread : Rs 3\n 3 for egg : Rs 5"<<endl;
			cin>>groceries;
			switch (groceries){
				case 1:
					cout<<"how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*2;
					break;
				case 2:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*3;
					break;
				case 3:
					cout<<" how may items you like to buy"<<endl;
					cin>>quantity;
					total=quantity*5;
					break;		
			}	
			break;
		default:
		 	cout<<" enbter correct menu"<<endl;	
		return 0;
			
	}
	cout<<"your total amout= "<<total<<endl;
//discount system	
	if(total<100){
		NetPrice=total;
		cout<<" No discount for this purchasing !\n"<<endl;
	}	
	else if (total>=100 && total<=500){
		discount=0.1*total;
		cout<<"discount = "<<discount<<endl;
		NetPrice=total-discount;
	}
	else {
		discount=0.2*total ;
		cout<<"discount = "<<discount<<endl;
		NetPrice=total-discount;
	}
	
	 
	cout<<"You just have to pay  Rs "<<NetPrice;
	
	
}
