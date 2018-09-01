//2. Write a C++ program to find maximum between three numbers. 
#include<iostream>
using namespace std;
int main()
{
	//a,b,c r 3 nums.
	int a,b,c;
	cout<<"enter three numbers"<<endl;
	cin>>a>>b>>c;
	if (a>b)//if a is grter thn b chk a>c or not
	{
		if (a>c)//hence a>c,b
		{
			cout<<a<<" is the maximum number."<<endl;
		}
		else//hence c>a>b
		{
			cout<<c<<" is the maximum number."<<endl;
		}
	}
	else
	{
		if (b>c)//hence b>c,a
		{
			cout<<b<<" is the maximum number."<<endl;
		}
		else//hence c>b>a
		{
			cout<<c<<" is the maximum number."<<endl;
		}
	}
	return 0;
}
