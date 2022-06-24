/*  Qno 12 
	12.	Write a program using OOP (Polymorphism Overloading)
	to concatenate one string to another string using
	binary + operator overloading.   
	*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

class strings{
	   string a;
	   string b;
	   string c;
	 public:
	   	   void getdata(string a,string b){
	   	   	this->a=a;
	   	   	this->b=b;
	   	   	}
		   void operator +(){
            
	 		c=a+b;
	 		}
	    void show(){
	    	
	    	cout<<c;
		}
	
};
int main(){
           strings obj;
           string a,b;
           
           a="how are you ";
           b="doing these dayes?";
           
           obj.getdata(a,b);
           obj.operator +();
           obj.show();
 
return 0;
}

