//4. Write a C++ program to check whether a number is divisible by 5 and 11 or not. 
#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Give me a number"<<endl;
	cin>>a;
	if(a%5==0)//chking the divisibility by 5
	{
		cout<<"The number is divisible by 5"<<endl;
	}
	else
	{
		cout<<"The number is not divisible by 5"<<endl;
	}
	if (a%7==0)//chking the divisibility by 7
	{
		cout<<"The number is divisible by 7"<<endl;
	}
	else
	{
		cout<<"The number is not divisible by 7"<<endl;
	}
	return 0;
}
