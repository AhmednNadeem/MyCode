#include<iostream>
using namespace std;
int main()
{
	cout<<"BODY MASS INDEX CALCULATOR" <<endl;
	int weight;
	float height,BMI;
	cout<<"enter weight in kilograms(KG)" <<endl;
	cin>>weight;
	cout<<"enter height in meters" <<endl;
	cin>>height;
	BMI =weight/(height*height); 
	cout<<"your BMI is:" <<" " <<BMI <<endl;
	if(BMI<18.5)
	cout<<"you are under weight" <<endl;
	else if(BMI>18.9 && BMI<24.9)
	cout<<"You are normal" <<endl;
	else if(BMI>25 && BMI<29.9)
	cout<<"you are over weight" <<endl;
	else if(BMI>30)
	cout<<"you are obese" <<endl;
	else
	cout<<"invalid input" <<endl;
	system("pause");
	
}
