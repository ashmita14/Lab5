//Conditional Program
//Write a program to input three angles of a triangle and check whether the triangle is valid or not.

//including libraries
#include<iostream>
using namespace std;
//declaring main function
int main(){
	//declaring variables
	int a1, a2, a3, sum;
	//asking user for three angles of triangle
	cout <<"Enter three angles of a triangle."<<endl;
	//accepting values
	cin >>a1 >>a2 >>a3;
	//adding the angles
	sum=a1+a2+a3;
	//checking condition for valid triangle
	if(sum==180){
		//displaying result
		cout<<"Triangle is valid."<<endl;
	}
	else{
		//displaying result
		cout <<"Triangle is not valid."<<endl;
	}
	//returning integer value to main function
	return 0;
}
