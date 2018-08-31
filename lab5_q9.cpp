//Conditional program
//Write a program to input a character and check whether it is an alphabet, digit or special character 

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring the variables
	char c;
	int ch, i, j, m, n;
	//asking user to enter character
	cout <<"Enter character."<<endl;
	//accepting value
	cin >>c;
	//converting character to its ASCII value by explicit conversion
	ch=int(c);
	//checking numerical value 
	for(i=48; i<=57; i++){
		if(i==ch){
			//displaying message
			cout <<"The character is a digit."<<endl;
			//breaking loop
			break;
		}
	}
	//checking special characters
	for(j=33; j<=47;j++){
		if(j==ch){
			//displaying message
			cout <<"The character is a special character."<<endl;
			//breaking loop
			break;
		}
	}
	//checking letters
	for(m=65, n=97; m<=90, n<=122; m++, n++){
		if(m==ch || n==ch){
			//displaying message
			cout <<"The character is a letter."<<endl;
			//breaking loop
			break;
		}
	}
	//returning integer value to main function
	return 0;
}
	
