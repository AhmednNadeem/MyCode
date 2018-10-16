#include<iostream>
using namespace std;
#include<string>
int main()
{
	float angle1, angle2,angle3;
	cout<<"enter two angles of a triangle" <<endl;
	cin>>angle1 >>angle2;
	angle3 = 180-(angle1+angle2);
	cout<<"the third angle is" <<" " <<angle3 <<endl;
	system("pause");
	
} 
