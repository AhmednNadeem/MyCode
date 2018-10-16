#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"check whether its a right trianlge or not" <<endl;
	cout<<"enter three sides of a triangle" <<endl;
	cin>>a>>b>>c;
	if(a*a + b*b == c*c )
	cout<<"its a right angled triangle" <<endl;
	else
	cout<<"its not a right angle triangle" <<endl;
	system("pause");
	
}  
