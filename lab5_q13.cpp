//Conditional Program
//Write a program to enter amount and find number of notes.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int amt, n2000, n500, n100, n50, n20, n10, r1, r2, r3, r4, r5;
	//asking user to enter amount
	cout <<"Enter amount."<<endl;
	//accepting value
	cin >>amt;
	//finding number of Rs. 2000 notes
	n2000=amt/2000;
	//displaying result
	cout <<"The number of Rs. 2000 notes = "<<n2000<<endl;
	//finding number of Rs. 500 notes
	r1=amt%2000;
	n500=r1/500;
	//displaying result
	cout <<"The number of Rs. 500 notes = "<<n500<<endl;
	//finding number of Rs. 100 notes
	r2=r1%500;
	n100=r2/100;
	//displaying result
	cout <<"The number of Rs. 100 notes = "<<n100<<endl;
	//finding number of Rs. 50 notes
	r3=r2%100;
	n50=r3/50;
	//displaying result
	cout <<"The number of Rs. 50 notes = "<<n50<<endl;
	//finding number of Rs. 20 notes
	r4=r3%50;
	n20=r4/20;
	//displaying result
	cout <<"The number of Rs. 20 notes = "<<n20<<endl;
	//finding number of Rs. 10 notes
	r5=r4%20;
	n10=r5/10;
	//displaying result
	cout <<"The number of Rs. 10 notes = "<<n10<<endl;
	//returning integer value to main function
	return 0;
}
	
