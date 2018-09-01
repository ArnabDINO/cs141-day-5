//31. Write a C++ program to count number of digits in any number. 
#include<iostream>
using namespace std;
int main()
{
	int n,i=0;
	cout <<"give a number"<<endl;
	cin>>n;
	while(n>0)
	{
		n=n/10;
		i++;
	}
	cout<<"the number of digits is "<<i<<endl;
	return 0;
}
