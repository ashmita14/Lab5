//Conditional program
//Write a program to input a letter and check whether it is uppercase or lowercase.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring the variables
	char c;
	int ch, i, j;
	//asking user for letter
	cout <<"Enter a letter."<<endl;
	//accepting value
	cin >>c;
	//converting letter to its ASCII code using explicit conversion
	ch=int(c);
	//checking uppercase letters
	for(i=65; i<=90; i++){
		//checking value
		if(i==ch){
			//displaying message
			cout <<"The character is in uppercase."<<endl;
			//breaking loop
			break;
		}
	}
	//checking lowercase
	for(j=97; j<=122; j++){
		//checking value
		if(j==ch){
			//displaying message
			cout <<"The character is in lowercase."<<endl;
			//breaking loop
			break;
		}
	}
	//returning integer value to main function
	return 0;
}
