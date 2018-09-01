//24. Write a C++ program to print all alphabets from a to z. - using while loop 
#include<iostream>
using namespace std;
int main()
{
	int n=97;//assignment of the variabe with value 97(ASCII of a)
	while (n<123)
	{
		cout<<char(n++)<<endl;
	}
	return 0;
}
