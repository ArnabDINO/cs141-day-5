/*21. Write a C++ program to input electricity unit charges and calculate total electricity bill according to the given condition: 
1. For first 50 units Rs. 0.50/unit 
2. For next 100 units Rs. 0.75/unit 
3. For next 100 units Rs. 1.20/unit 
4. For unit above 250 Rs. 1.50/unit 
5. An additional surcharge of 20% is added to the bill*/
#include<iostream>
using namespace std;
int main()
{
	double unit,bill,char_1,char_2,char_3,char_4,netbill;
	cout<<"enter the units of electricity used"<<endl;
	cin>>unit;
	//for first category
	if(unit>50)
	{
		char_1=0.50*50;
		//for 2nd cate
		if(unit>150)
		{
			char_2=0.75*100;
			//for 3rd cate
			if(unit>250)
			{
				char_3=1.2*250;
				//for 4th cate
				if(unit>250)
				{
					char_4=1.5*(unit-250);
				}
			}
			else
			{
				char_3=1.2*(unit-150);
			}
		}
		else
		{
			char_2=0.75*(unit-50);
		}
	}
	else
	{
		char_1=unit*0.50;
	}
	//total bill
	bill=char_1+char_2+char_3+char_4;
	//adding the surcharge
	netbill=bill*1.2;
	cout<<"the bill is "<<netbill<<endl;
	return 0;
}
