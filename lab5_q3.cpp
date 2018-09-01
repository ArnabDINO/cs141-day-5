//3. Write a C++ program to check whether a number is negative, positive or zero. 
#include<iostream>
using namespace std;

int main()
{
	double nUm;
	cout<<"Give a number"<<endl;
	cin>>nUm;
	if (nUm>0)//chk for +ve num
	{
		cout<<"entered number is positive."<<endl;
	}
	else if (nUm<0)//chk for -ve num
	{
		cout<<"entered number is negative."<<endl;
	}
	else//chk for 0
	{
		cout<<"you have entered zero"<<endl;
	}
	return 0;
}
