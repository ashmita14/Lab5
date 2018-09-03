//Loops
//Write a program to find sum of all odd natural numbers from 1 to n.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int sum, i, n;
	//initializing sum and i
	sum=0;
	i=1;
	//asking user for limit
	cout <<"Enter limit n."<<endl;
	//accepting value
	cin >>n;
	//running while loop to find sum
	while(i<=n){
		//checking if number is odd
		if(i%2!=0){
			//adding odd numbers
			sum=sum+i;
		}
		//incrementing value of i
		i++;
	}
	//displaying result
	cout <<"The sum of all odd numbers between 1 and "<<n<<" is = "<<sum<<endl;
	//returning integer value to int main function
	return 0;
}


