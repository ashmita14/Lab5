//Loops
//Write a program to find the multiplication table of any number.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int i, n, ml;
	//asking user for number
	cout <<"Enter a number." <<endl;
	//accepting value
	cin >>n;
	//initializing values to i and ml
	i=1;
	ml=1;
	//printing table
	cout <<"Multiplication table of "<<n<<" : "<<endl;
	//running while loop from 1 to 10 for generating multiplication table
	while(i<=10){
		//multiplication table
		ml=n*i;
		//displaying result
		cout <<ml<<endl;
		//incrementing value of i
		i++;
	}
	//returning integer value to main function
	return 0;
}
