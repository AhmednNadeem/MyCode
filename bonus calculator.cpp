#include<iostream>
using namespace std;
int main()
{
	char g;
	int age,pay,total,bonus;
	cout<<"enter your gender" <<endl;
	cin>>g;
	cout<<"enter your age" <<endl;
	cin>>age;
	cout<<"enter your basic pay" <<endl;
	cin>>pay;
	if(g=='m'||g=='f')
	if(age>40 &&pay>30000)
	{
		bonus = pay*20/100;
		total=bonus+pay;
	}
	else if(g=='m'&&age<40&&pay>20000)
	{
		bonus=pay*15/100;
		total=bonus+pay;
	}
	else if(g=='f' &&age<30 &&pay>20000)
	{
		bonus = pay*10/100;
		total = bonus +pay;
	}
	else
	cout<<"you are ineligible for bonus" <<endl;
	
	cout<<"Your bonus is:" <<" " <<bonus <<endl;
	system("pause");
}
