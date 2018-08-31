//Conditional program
//Write a program to input weekday number and print corresponding week day.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i;
	//asking user for week day number
	cout <<"Enter week day number."<<endl;
	//accepting value
	cin >>i;
	//checking week day number 
	if(i==1){
		//displaying result
	cout <<"It is Monday."<<endl;
	}
	if(i==2){
		//displaying result
	cout <<"It is Tuesday."<<endl;
	}
	if(i==3){
		//displaying result
	cout <<"It is Wednesday."<<endl;
	}
	if(i==4){
		//displaying result
	cout <<"It is Thursday."<<endl;
	}
	if(i==5){
		//displaying result
	cout <<"It is Friday."<<endl;
	}
	if(i==6){
		//displaying result
	cout <<"It is Saturday."<<endl;
	}
	if(i==7){
		//displaying result
	cout <<"It is Sunday."<<endl;
	}
	//returning integer value to main function
	return 0;
}
