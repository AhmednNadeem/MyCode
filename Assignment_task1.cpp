#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num1,num2;
	char a;
	cout<<"enter 1st number"<<endl;
	cin>>num1;
	cout<< "enter 2nd number"<<endl;
	cin>> num2;
	cout<< "enter the operator"<<endl;
	cin>> a;
	if(a== '+')
	 cout <<num1 <<a <<num2 <<"=" <<num1+num2 <<endl;

	
	if(a == '-')
	 cout <<num1 <<a <<num2 <<"=" <<num1 - num2 <<endl;

	  
	
	if(a =='*')
	  cout <<num1 <<a <<num2 <<"=" <<num1 * num2 <<endl;
	 
	  
	  
	if(a=='/') 
	 {
	   if(num1 >= num2 )
	     cout<<num1 <<a <<num2 <<"=" <<num1/num2 <<endl;
	  else if (num1 < num2)
        cout<<num2 <<a <<num2 <<"=" <<num2/num1 <<endl;
      else
        cout<<"invalid inut";
      }
	
	system("pause") ;
	   
	     
	
	 
}
