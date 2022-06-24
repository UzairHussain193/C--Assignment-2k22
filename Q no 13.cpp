/*  Assignment pf 
		Q no 13
	13.	Write a C++ program using Object Oriented Programming
		concepts to Input Votes for two candidates 
		and find winner of the Election based on the received votes. 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int counta=0;
int countb=0;

class election {
	private:
		int count1=0;
		int count2=0;
		string candidate1;
		string candidate2;
	public:
		void setcandidate1(string c1) {
			candidate1=c1;
		}
		void setcandidate2(string c2) {
			candidate2=c2;
		}
		string getcandidate1() {
			return candidate1;
		}
		string getcandidate2() {
			return candidate2;
		}
		void setvoting() {
			int choice;
			int voter;
			cout<<"\n\nEnter number of \"voters\" : ";
			cin>>voter;
			cout<<"\n\n\t ...Names of candidates ...\n"<<endl;
			cout<<"\nEnter  \"1\"  for candidate \" "<<candidate1<<" \" "<<endl;
			cout<<"\nEnter 	\"2\"  for candidate \" "<<candidate2<<" \" "<<endl;

			cout<<"\n\n\t ....Voting starts....\n"<<endl;
			for(int i=0; i<voter; i++) {
				cout<<endl<<i+1<<" persons vote ....( 1 / 2 ) : ";
				cin>>choice;
				if(choice==1) {
					count1++;
				} else if(choice==2) {
					count2++;
				} else {
					cout<<"\nEnter only 1 or 2 "<<endl;
				}
			}
		}
		void getvoting() {
			cout<<"\n\tvotes "<<count1<<" : "<<count2<<endl;
			if(count1>count2) {

				cout<<"\nWinner is "<<candidate1<<"  with "<<count1<<"  votes."<<endl;
			} else if(count1<count2) {
				cout<<"\nWinner is "<<candidate2<<"  with "<<count2<<"  votes."<<endl;
			} else if(count1==count2) {
				cout<<"\n Election tied.."<<endl;
			} else {
				cout<<"\nNo result\n";
			}
		}
};
int main() {
	election candidate1;

	string cname[2];
	
	cout<<"\nEnter name of \"first candidate\" : ";
	cin>>cname[0];
	cout<<"\nEnter name of \"second candidate\" : ";
	cin>>cname[1];

	candidate1.setcandidate1(cname[0]);
	candidate1.setcandidate2(cname[1]);

	candidate1.setvoting();
	candidate1.getvoting();

	return 0;
}
