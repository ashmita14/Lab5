//Loops
//Write a program to print all natural numbers from n to 1, using while loop.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int n;
	//asking user for limit n
	cout <<"Enter limit n."<<endl;
	//accepting value
	cin >>n;
	//creating while loop
	while(n>=1){
		//displaying the number
		cout <<n<<endl;
		//decrementing value of n
		n--;
	}
	//returning integer value to main function
	return 0;
}
