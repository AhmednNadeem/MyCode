#include<iostream>
using namespace std;
#include<string>
int main()
{
	int a,b;
	char oper;
	cout<<"enter two numbers" <<endl;
	cin>>a>>b;
	cout<<"enter the operator"<<endl;
	cin>>oper;
    if(oper=='+')
    cout<<a <<oper <<b <<"=" <<a+b <<endl;
    if(oper =='-')
    cout<<a <<oper <<b <<"=" <<a-b <<endl;
    if(oper == '*')
    cout<<a <<oper <<b <<"=" <<a*b <<endl;
    if(oper == '/')
    {
    	
      if(b!=0)
	  {
		    	
	    if(a>b)
        cout<<a <<oper <<b <<"=" <<a/b <<endl;
        else
       cout<<b <<oper <<a <<"=" <<b/a <<endl;
    }
    }
    system("pause"); 
}
