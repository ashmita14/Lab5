//Conditional Program
//Write a program to check whether a character is alphabet or not.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	char c;
	int i, j, ch;
	bool b;
	//assigning default value
	b=false;
	//asking user for character
	cout <<"Enter a character." <<endl;
	//accepting character
	cin >>c;
	//converting character to integer by explicit method
	ch=int(c);
	//checking if integer lies within 65 to 90, i.e, within the ASCII codes for A to Z and ASCII codes for a to z using for loop
	for(i=65, j=97; i<=90, j<=122; i++, j++){
		//comparing values of ch and i
		if(i==ch){
			//assigning boolean value
			b=true;
			//breaking loop
			break;
		}
		if(j==ch){
			//assigning boolean value
			b=true;
			//breaking loop
			break;
		}
		
	}
	//checking the value of boolean variable
	if(b==true){
		//displaying message
		cout <<"The character is a letter." <<endl;
	}
	else{
		//displaying message
		cout <<"The character is not a letter."<<endl;
	}
	//returning integer value to main function
	return 0;
}

