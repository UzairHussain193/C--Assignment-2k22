/*  Assignment 
	Q no 14
	14.	A company has following details of their employees in the file 'emp.txt'  
	a. Emp Id
	b. Emp Name
	c. Emp Address
	d. Emp Dept (Admin/Sales/Production/IT)
	e. Emp Phone
	f. Emp Age
	Write a C++ program to read the above file. Create new file such as
	Adm.txt, Sal.txt, Pro.txt, IT.txt respectively to store the employee
	details according to their department.
 */
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	string emp_id,emp_dept,emp_name,emp_add;
	long  long emp_phone;
	int emp_age;
	string str;
	cout<<"\nEnter employee id : ";cin>>emp_id;
	cout<<"\nEnter employee name : ";cin>>emp_name;
	cout<<"\nEnter employee	address : ";cin>>emp_add;
	cout<<"\nEnter employee department (Admin/Sales/Production/IT) : ";cin>>emp_dept;
	cout<<"\nEnter employee phone : ";cin>>emp_phone;
	cout<<"\nEnter employee age : ";cin>>emp_age;
	
	if(emp_dept=="admin" || emp_dept=="Admin"){
		ofstream admin("Adm.txt");
		cout<<"\n\tAdm.txt file is created for admin department.."<<endl;
	}
	else if(emp_dept=="sales" || emp_dept=="Sales"){
		ofstream sales("Sal.txt");
		cout<<"\n\tSal.txt file is created for sales department.."<<endl;
	}
	else if(emp_dept=="production" || emp_dept=="Production"){
		ofstream production("Pro.txt");
		cout<<"\n\tPro.txt file is created for production department.."<<endl;
	}
	else if(emp_dept=="it" || emp_dept=="IT" || emp_dept=="It"){
		ofstream it("IT.txt");
		cout<<"\n\tIT.txt file is created for it department.."<<endl;
	}
	else{
		cout<<"\nInvalid dept, kindly choose (Admin/Sales/Production/IT) "<<endl;
	}
	ofstream company("emp.txt",ios::app);
	cout<<"\n\n\t\t emp.txt file created successfully for all data.\n"<<endl;
	company<<"Employee i.d\tEmployee name\tEmployee address\tEmployee department\tEmployee phone\tEmployee age\n"<<endl;
	company<<emp_id<<"\t\t"<<emp_name<<"\t\t"<<emp_add<<"\t\t"<<emp_dept<<"\t\t"<<emp_phone<<"\t\t"<<emp_age<<endl;
	company.close();

	//// reading file
	ifstream employee("emp.txt");
		cout<<"\n\tText from emp.txt"<<endl<<endl;
	while(getline(employee,str)){
		cout<<endl<<str<<endl;
	}
	employee.close();
	return 0;
}
