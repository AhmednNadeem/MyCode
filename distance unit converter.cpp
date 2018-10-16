#include<iostream>
using namespace std;
int main()
{
	float KM,feet,yard,meter,mile;
	cout<<"enter distance in kilo-meters" <<endl;
	cin>>KM;
	mile = 0.621371192*KM;
	meter=1000*KM;
	yard=1093.6133*KM;
	feet=3280.8399 *KM;
	cout<<"distance:"<<endl;
	cout<<"In miles= " <<" " <<mile <<endl;
	cout<<"In yards= "	<<" " <<yard <<endl;
	cout<<"In meter= " <<" " <<meter <<endl;
	cout<<"In feet= " <<" " <<feet <<endl;
	system("pause");
}
