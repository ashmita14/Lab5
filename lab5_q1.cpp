//Conditional Program
//Write a program to find the greater of two numbers

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int a1, a2;
	//asking user for the numbers
	cout << "Enter two numbers."<<endl;
	//accepting the numbers
	cin >> a1 >>a2;
	//checking which is the greater number
	if(a1>a2){
		//displaying the number
		cout << "The greater number is " << a1 <<endl;
	}
	else{
		//displaying the number
		cout <<"The greater number is " << a2 <<endl;
	}
	//returning integer value to int main function
	return 0;
}
