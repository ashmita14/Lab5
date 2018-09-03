//Loops
//Write a program to print all odd numbers between 1 to 100.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i;
	//assigning value to i
	i=1;
	//running while loop to print odd numbers
	while(i<=100){
		//checking if i is odd
		if(i%2!=0){
			//printing value to i
			cout <<i<<endl;
		}
		//incrementing the value of i
		i++;
	}
	//returning integer value to main function
	return 0;
}
