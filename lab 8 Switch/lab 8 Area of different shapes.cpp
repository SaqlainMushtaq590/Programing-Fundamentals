#include<iostream>
using namespace std;

int mian(){

	//=================================================Area of shapes=============================================================================
	
	
	double const pi=3.17;   //initiallising a constant
	int shapes;
	cout<<" press 1 for area of circle \n press 2 for area trianle \n press 3 for area of rectangle \n press 4 for area of square \n";
	cin>>shapes;
	double x,y,r;
	switch(shapes){
		case 1:
			cout<<"Enter the radius of circle \n radius : ";
			cin>>r;
			cout<<" The area of circle is ="<< pi*r*r<<endl;
			break;
		case 2:
			cout <<" Enter the hight and base of triangle \n Hight :";
			cin>>x;
			cout<<" Base :";
			cin>>y;
			cout<<" The area of triangle is ="<<(x*y)/2<<endl;
			break;
		case 3:
			cout<<"Enter the length and width of rectangle \n Length :";
			cin>>x;
			cout<<" Width :";
			cin>>y;
			cout<<" The area of rectangle is ="<<x*y<<endl;
			break;
		case 4:
			cout<<" Enter the lenght and width of square\n Length :";
			cin>>x;
			cout<<" Width :";
			cin>>y;
			cout<<" The area of square is ="<<x*y<<endl;
			break;
			default:
				cout<<" wrong entry of data !\n";
	}


}
