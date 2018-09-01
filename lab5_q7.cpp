//7. Write a C++ program to check whether a character is alphabet or not
#include <iostream>
using namespace std;
int main()
{
	char c;
	int a;
	cout<<"enter a character"<<endl;
	cin>>c;
	a=(int)c;//converting the input character into its ASCII code
	if (a>=65 && a<=90 || a>=97 && a<=122)//chking for the range of alphabet
	{
		cout<<"the character is an alphabet"<<endl;
	}
	else
	{
		cout<<"the character is not an alphabet"<<endl;
	}
	return 0;
}
