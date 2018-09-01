//30. Write a C++ program to print multiplication table of any number. 
#include <iostream>
using namespace std;
int main()
{
	int n=0,i=1;
	cout <<"give one number"<<endl;
	cin>>n;
	cout<<"the multiplication table of "<<n<<" is:"<<endl;
	while (i<=10)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
		i++;
	}
	return 0;
}
