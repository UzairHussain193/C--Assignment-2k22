/*  Assignment  
	Q no 08
	8.	Write C++ code to make a class that contains a member function that takes two
 		integers as arguments and returns their Sum. The program checks to ensure that:
  		The First number is an Odd number and the second number is an Even number. 
  		The program also checks to ensure that both numbers are positive and greater than zero.
 		The program also checks to ensure that: the first number is greater than the second number.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class sum{		///class named sum 
	private:
		int x,y;
	public:
		
	void setcheck(int a,int b){			// setters to set data at run time
	 	x=a;
	 	y=b;
	 }
	void getcheck(){					// getters to get data at run time
		if(x%2!=0 && y%2==0 && x>0 && y>0 && x>y){			// if statement to check conditions
			cout<<"Yes your all conditions are true.."
				  "\n\n\tconditions : (x>y),(x>0),(y>0),(x is odd),(y is even)\n"<<endl;
			cout<<"\tResult is : "<<x+y;
		}
		else{			// if any condition is not true
			cout<<"\nInvalid input your all conditions are not true..\n\n\t"
				  "conditions : (x>y),(x>0),(y>0),(x is odd),(y is even)"<<endl;
		}
	}
};
int main()
{
	
	sum conditionchecker;		// object of class sum named conditionchecker
	
	int x,y;
	/// taking input argument values to check all conditions and then sum them . 
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter second number : ";
	cin>>y;
	
	/// conditions should be true in order to sum two inputted values
	/// conditions : (x>y),(x>0),(y>0),(x is odd),(y is even).
	
	/// setting inputted values to a member function named check
	conditionchecker.setcheck(x,y);
	/// output  of inputted values from a member function named check
	conditionchecker.getcheck();

	return 0;
}
