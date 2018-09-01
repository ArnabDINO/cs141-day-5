//22. Write a C++ program to print all natural numbers from 1 to n. - using while loop 
#include<iostream>
using namespace std;
int main()
{
	int n,i=0;//n is for the input of upper limit,and i is the counter
	cout<<"give a number"<<endl;
	cin>> n;
	while (i<=n)//loop conditions
	{
		cout <<i++<<endl;//loop body
	}
	return 0;
}
