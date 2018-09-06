//Loops
//Write a program to count the number of digits in any number.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int n, m;
	//initializing value to m
	m=0; 
	//asking user for number
	cout <<"Enter a number."<<endl;
	//accepting number
	cin >>n;
	//running while loop to count the number of digits
	while(n>0){
		//incrementing m to count the number of digits
		m++;
		//dividing number by 10
		n=n/10;
	}
	//printing result
	cout <<"The number of digits in number is = "<<m<<endl;
	//returning integer value to main function
	return 0;
}

