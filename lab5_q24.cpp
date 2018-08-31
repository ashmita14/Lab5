//Loops
//Write a program to print all values from a to z using while loop.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i;
	//initializing i with the ASCII value of a
	i=97;
	//creating while loop
	while(i<=122){
		//displaying character equivalent to ASCII code
		cout <<char(i)<<endl;
		//incrementing i
		i++;
	}
	//returning integer value to main function
	return 0;
}
