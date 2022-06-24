/*  Q no 11
	11.	Write a program using Object Oriented Programming concepts to calculate
 			bonus of the employees’ admin and salesman. The admin and salesman classes
 	 		derives the information from class person. Create base and all derived classes having
	 		same member functions called getdata, display data and bonus.
  			Calculates bonus of the specified employee 
*/
#include<iostream>
#include<conio.h>
using namespace std;
class person{
	protected:			/// we used protected access specifier b/c of inheritance
		string name;
		int income;
		float bonus_per;
	public:
		void getdata(string name,int income,float bonus_per){
			this-> name = name;
			this-> income = income;
			this-> bonus_per = bonus_per ;
		}
		float bonus(){
			float bonus;
			bonus=bonus_per/100;
			bonus=bonus*income;
			
			return bonus;
		}
};
class admin:public person{
};
class salesman:public person{
};
int main()
{
	admin admin;
	salesman sman;
	string r,cat;
	int i;
	float t;
	
	cout<<"\nEnter name of employee : ";
	cin>>r;
	cout<<"\nEnter category of employee ( admin/salesman) : ";
	cin>>cat; 
	cout<<"\nEnter monthly income in (rupees) : ";
	cin>>i;
	
	i = i * 12;
	
	if(cat=="admin"){
		t=20;
		admin.getdata(r,i,t);
		cout<<"\n\nThe bonus percentage for \" "<<r<<" \" is : "<<t<<endl;
		cout<<"\n\nThe person "<<r<<" belongs to \" "<<cat<<" \" category."<<endl;
		cout<<"\n\nThe yearly bonus of \" "<<r<<" \" is : "<<admin.bonus()<<" rupees."<<endl;
	}
	else if(cat=="salesman"){
		t=15;
		sman.getdata(r,i,t);
		cout<<"\n\nThe bonus percentage for \" "<<r<<" \" is : "<<t<<endl;
		cout<<"\n\nThe person "<<r<<" belongs to \" "<<cat<<" \" category."<<endl;
		cout<<"\n\nThe yearly bonus of \" "<<r<<" \" is : "<<sman.bonus()<<" rupees."<<endl;
	}
	else{
		cout<<"\n\nInvalid category."<<endl;
	}

	return 0;
}
