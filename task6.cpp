#include<iostream>
using namespace std;
#include<string>
int main()
{
	float radius;
	float circumference,diameter, area;
	cout<<"enter value of radius of circle" <<endl;
	cin>>radius;
	diameter = radius/2;
	circumference = 2*3.14259*radius;
	area = 3.14259*radius*radius;
	cout<<"Circumference=" <<" " <<circumference <<endl;
	cout<<"Area =" <<" " <<area <<endl;
	cout<<"Diameter=" <<diameter <<endl;
	system("pause");
	
	}
