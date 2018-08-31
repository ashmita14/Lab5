//Loops
//Write a program to print all natural numbers from 1 to n, using while loop.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int n, i;
	//initializing i
	i=1;
	//asking user for limit n
	cout <<"Enter limit n."<<endl;
	//accepting value
	cin >>n;
	//creating while loop
	while(i<=n){
		//displaying the number
		cout <<i<<endl;
		//incrementing value of i
		i++;
	}
	//returning integer value to main function
	return 0;
}
