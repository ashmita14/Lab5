//Conditional Program
//Write a program to check whether a number is negative, positive or zero

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variable
	int a;
	//asking user for number
	cout << "Enter a number." <<endl;
	//accepting value
	cin >>a;
	//checking whether the number is negative
	if(a<0){
		//displaying message
		cout <<"The number "<<a<<" is negative." << endl;
	}
	//checking whether the number is positive
	if(a>0){
		//displaying the message
		cout <<"The number "<<a<<" is positive." <<endl;
	}
	if(a==0){
		//displaying message
		cout <<"The number is zero."<<endl;
	}
	//returning integer value to int main function
	return 0;
}
