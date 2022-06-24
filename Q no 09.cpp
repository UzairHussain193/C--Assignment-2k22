/*  Assignment
	Q no : 9
	9.	Write a C++ class that contains a member function that takes
	 an integer as an argument and display its table from 1 to 10,
	  when the Tab key will be pressed. */


#include<iostream>				/// used for cout and cin functions
#include<conio.h>				/// used for getch() method
#include<iomanip>				/// used for setw() method
using namespace std;

void table(int x) {				// function to generate table
	for(int y=1; y<=10; y++) {
		cout<<endl<<"\t"<<x<<" * "<<setw(2)<<y<<" = "<<setw(3)<<x*y<<endl;
	}
}		//func ends
int main() {
	int n;
	char ch;
	//taking input table no
	cout<<"Enter no for table : ";
	cin>>n;
	//taking input tab key character
	cout<<"\nEnter any char (Tab) : ";
	ch=getch();
	if(ch=='	') {			//if user enters tab key then printing table otherwise
		
		cout<<"\n\n\tPrinting Table of : "<<n<<endl;
		table(n);
		
	} 
	
	else {					// otherwise printing invalid input and u have 2 enter tab key...
		cout<<"\n\nInvalid input, enter tab key.."<<endl;
	}

	return 0;
}
