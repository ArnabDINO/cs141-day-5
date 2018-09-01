//6. Write a C++ program to check whether a year is leap year or not. 
#include<iostream>
using namespace std;
int main()
{
	int yEar;//declaration
	cout<<"give me a year"<<endl;
	cin>> yEar;//input of value
	if(yEar%100==0)
	{
		if(yEar%400==0)//chking for the century cases
		{
			cout<<"the year is a leap year."<<endl;
		}
		else
		{
			cout<<"the year is not a leap year."<<endl;
		}
	}
	else
	{
		if(yEar%4==0)//checking for the normal cases
		{
			cout<<"the year is a leap year."<<endl;
		}
		else
		{
			cout<<"the year is not a leap year."<<endl;
		}
	}
	return 0;
}
