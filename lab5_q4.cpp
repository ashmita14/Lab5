//Conditional Program
//Write a program to check whether a number is divisible by 5 and 11 or not

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int a;
	//asking user for number
	cout <<"Enter a number." <<endl;
	//accepting values
	cin >>a;
	//checking if the number is divisible by 5 and 11
	if(a%5==0 && a%11==0){
		//displaying message
		cout <<"The number is dibisible by 5 and 11."<<endl;
		}
	else{
		//displaying message
		cout <<"The number is not divisible by 5 and 11."<<endl;
		}
	//returning integer value to main function
	return 0;
}
