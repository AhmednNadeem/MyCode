#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a , b,c;
	cout<<"enter value for a and b and c"<<endl;
	cin>> a >> b >> c;
	(a>b && a>c ? cout<<"a is greater": cout<<"a is not bigger" );
	system("pause");
}
