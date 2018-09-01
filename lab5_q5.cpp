//5. Write a C++ program to check whether a number is even or odd. 
#include<iostream>
using namespace std;
int main()
{
	int a;//declaration of a variable
	cout <<"Give me a number"<<endl;
	cin>>a;
	if(a%2==0)//chk for divisibility by 2
	{
		cout<<"the number is even"<<endl;
	}
	else
	{
		cout<<"the number is odd"<<endl;
	}
	return 0;
}
