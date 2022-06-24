/*  Assignment
	Q no 10
	10.	 C++ Program using structure to Store Information of 10 employees in a Structure array.
		( Note: Declare at least four structure members of your own choice.
	 	Possible structure members can be Empno, Empname, etc.).
*/
#include<iostream>
#include<conio.h>
using namespace std;
struct employee{
	string emp_name;
	string emp_designation;
	double emp_salary;
	int emp_contract_years_duration;
};
int main()
{
	int n=10;
	cout<<"Enter no of employee : ";
	cin>>n;
	
	employee e[n];
	
	for(int i=0;i<n;i++){
		cout<<"\n\nEnter \"name\" of employee "<<i<<" : ";
		cin>>e[i].emp_name;
		cout<<"\nEnter \"designation\" of employee "<<i<<" : ";
		cin>>e[i].emp_designation;
		cout<<"\nEnter \"salary\" of employee "<<i<<" : ";
		cin>>e[i].emp_salary;
		cout<<"\nEnter \"contract years(in int)\" of employee "<<i<<" : ";
		cin>>e[i].emp_contract_years_duration;
	}

	cout<<"\n\n\t....Printing values taken from user's input....\n"<<endl;
	
	for(int i=0;i<n;i++){
		cout<<"\nName of employee "<<i<<" : "<<e[i].emp_name<<endl;	
		cout<<"\nDesignation of employee "<<i<<" : "<<e[i].emp_designation<<endl;	
		cout<<"\nSalary of employee "<<i<<" : "<<e[i].emp_salary<<endl;	
		cout<<"\nContract years(in int) of employee "<<i<<" : "<<e[i].emp_contract_years_duration<<endl;	
	}
	return 0;
}
