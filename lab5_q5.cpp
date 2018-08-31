//Conditional Program
//To check whether a number is odd or even

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int a;
	//asking user for number
	cout <<"Enter a number." <<endl;
	//accepting the number
	cin >>a;
	//checking if number is odd or even
	if(a%2==0){
		//displaying message
		cout <<"The number is even."<<endl;
	}
	else{
		//displaying message
		cout <<"The number is odd."<<endl;
	}
	//returning integer value to main function
	return 0;
}


