//1. Write a C++ program to find maximum between two numbers. 
#include<iostream>
using namespace std;

int main()
{
	//dexclare the variables
	int num_1,num_2;
	//ask for input and take them
	cout<<"enter first number"<<endl;
	cin>>num_1;
	cout<<"enter second number"<<endl;
	cin>>num_2;
	if(num_1>num_2)//case 1
	{
		cout<<num_1<<" is the maximum."<<endl;
	}
	else if(num_1<num_2)//case 2
	{
		cout<<num_2<<" is the maximum."<<endl;
	}
	else//case 3
	{
		cout<<"the numbers are equal"<<endl;
	}
	return 0;
}
