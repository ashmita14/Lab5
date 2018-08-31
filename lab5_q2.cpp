//Conditional program
//Write a program to find greatest of three numbers

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int a1, a2, a3, max;
	//asking user for values
	cout << "Enter three numbers." <<endl;
	//accepting values
	cin >> a1 >>a2 >> a3;
	//checking greatest number
	if(a1>a2){
		if(a1>a3){
			max=a1;
		}
		else{
			max=a3;
		}
	}
	else{
		if(a2>a3){
			max=a2;
		}
		else{
			max=a3;
		}
	}
	//displaying maximum number
	cout <<"The maximum number is "<< max <<endl;
	//returning integer value to main function
	return 0;
}
	

