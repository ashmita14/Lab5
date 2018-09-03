//Loops
//Write a program to find sum of natural numbers from 1 to n.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int sum, n, i;
	//initializing sum and i
	sum=0;
	i=1;
	//asking user for limit n
	cout << "Enter limit n."<<endl;
	//accepting value from user
	cin>>n;
	//running while loop to find sum
	while(i<=n){
		//adding numbers
		sum=sum+i;
		//incrementing value of i
		i++;
	}
	//displyaying result
	cout <<"Sum of first "<<n<<" natural numbers is = "<<sum<<endl;
	//returning integer value to function
	return 0;
}
