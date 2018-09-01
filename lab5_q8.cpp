//8. Write a C++ program to input any alphabet and check whether it is vowel or consonant. 
#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	cout<<"Give me an alphabet"<<endl;
	cin>>c;
	a=(int)c;
	if (a>=65 && a<=90 || a>=97 && a<=122)//chking for the range of alphabet
	{
		if (a==65||a==69||a==73||a==79||a==85||a==97||a==101||a==105||a==111||a==117)//chking for vowels
		{
			cout<<"the character is a vowel"<<endl;
		}
		else
		{
			cout<<"the character is a consonant"<<endl;
		}
	}
	else
	{
		cout<<"the character is not an alphabet"<<endl;
	}
	return 0;
}
