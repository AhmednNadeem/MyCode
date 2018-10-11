#include<iostream>
using namespace std;
#include<string>
int main()
{
	int i,base,exponent,j;
	i=0;
	j=1;
	cout<<"enter base and exponent" <<endl;
	cin>>base>>exponent;
	while(i<=exponent)
	{
		j=j*base;
		i++;
	}
	cout<<"result is" <<" " <<j <<endl;
	system("pause");
}
