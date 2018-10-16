#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char oper;
	cout<<"enter two integers" <<endl;
	cin>>a>>b;
	cout<<"enter the operator" <<endl;
	cin>>oper;
	switch(oper)
	{
		case'+':
            cout<<a <<oper <<b <<"=" <<a+b <<endl;	
            break;
        case'-':
        	cout<<a <<oper <<b <<"=" <<a-b <<endl;
        	break;
        case'*':
        	cout<<a <<oper <<b <<"=" <<a*b <<endl;
        	break;
        case'/':		    	
	        if(a>b)
            cout<<a <<oper <<b <<"=" <<a/b <<endl;
            else
            cout<<b <<oper <<a <<"=" <<b/a <<endl;
            break;
            
        case'%':
        	cout<<a <<oper <<b <<"=" <<a%b <<endl;
        	break;
        default:
        	cout<<"invalid operator" <<endl;
    } 
	
	system("pause");
	
}
