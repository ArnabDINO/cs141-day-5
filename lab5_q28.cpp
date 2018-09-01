//28. Write a C++ program to find sum of all even numbers between 1 to n.
#include<iostream>
using namespace std;
int main()
{
	int n, sum=0,i=0;//n is the input for uppr lmt nd i is the counter and working variable
	cout<<"give me a number"<<endl;
	cin>> n;
	while(i<=n)
	{
		sum=sum+i;
		i+=2;//increment by 2
	}
	cout <<"the sum of the even numbers lesser than or equal to "<<n<<" is "<<sum<<endl;
	return 0;
}
