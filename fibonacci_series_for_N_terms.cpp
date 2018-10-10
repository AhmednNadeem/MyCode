#include<iostream>
using namespace std;
int main()
{
	int n,a,b,j,terms;
	a=0, b=1;
	cout<<"enter number of terms for fibonacci series" <<endl;
	cin>>terms;
	for(j=0;j<=terms;j++)
	{
		
     	 
		 cout<<a <<",  ";
		 n=a+b;
	     a=b;
		 b=n;


	
    } 
    system("pause");
} 
