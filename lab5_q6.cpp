//Conditional Program
//Write a program to check whether a year is leap year or not

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int yr;
	//asking user for year-
	cout <<"Enter year." <<endl;
	//accepting the value
	cin >>yr;
	//checking if the given year is leap year
	if(yr%4!=0){
		//displaying message
		cout <<"It is not a leap year."<<endl;
	}
	else{
		//checking second condition
		if(yr%100!=0){
			//displaying message
			cout <<"It is a leap year."<<endl;
		}
		else{
			//checking third condition
			if(yr%400==0){
				//displaying message
				cout <<"It is a leap year." <<endl;
			}
			else{
				//displaying message
				cout <<"It is not a leap year."<<endl;
			}
		}
	}
	//returning integer value to main function
	return 0;
}

