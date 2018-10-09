#include<iostream>
using namespace std;
int main()
{
	int a , b , temp;
	cout<< "enter the value of a and b"<<endl;
	cin>> a >> b;
	cout<<"value before swapping are " <<" "<< a <<"and" <<b <<endl;
	temp = a;
	a = b;
	b = temp;
	cout<<"value after swapping are" <<" " <<a <<"and" <<b <<endl;
	system("pause");
	
	
}
