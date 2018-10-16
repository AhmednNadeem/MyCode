#include<iostream>
using namespace std;
int main()
{
	int a,b,number;
	cout<<"enter a number" <<endl;
	cin>>number;
	b=0;
	for(a=number;a!=0;a=a/10)
	{
		b=10*b + a%10;
	}
	cout<<"reverse" <<" " <<b <<endl;
	if(number==b)
	{
		cout<<"its a palindrome number" <<endl;
	}
	system("pause");
}
