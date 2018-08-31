//Conditional program
//Write a program to input a letter and check whether it is a vowel or a consonant.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring the variables
	char c;
	int ch;
	//asking user for letter
	cout <<"Enter a letter."<<endl;
	//accepting value
	cin >>c;
	//converting letter to its ASCII code using explicit conversion
	ch=int(c);
	//checking if the ASCII code corresponds to any vowel
	if(ch==65 || ch==69 || ch==73 || ch==79 || ch==85 || ch==97 || ch==101 || ch==105 || ch==111 || ch==117)
	{
		//displaying value
		cout <<"The letter is a vowel."<<endl;
	}
	else{
		//displaying value
		cout <<"The letter is a consonant." <<endl;
	}
	//returning integer value to main function
	return 0;
}
	
