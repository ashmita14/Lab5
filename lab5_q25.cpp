//Loops
//Write a program to print all even numbers from 1 to 100.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i;
	//assigning value to i
	i=1;
	//running while loop to print the numbers
	while(i<=100){
		//checking if value of i is even
		if(i%2==0){
			//displaying the value of i
			cout <<i<<endl;
		}
		//incrementing value of i
		i++;

	}
	//returning integer value to main function
	return 0;
}
