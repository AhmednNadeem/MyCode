#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three sides of a triangle" <<endl;
	cin>>a>>b>>c;
	cout<<"condition for constructing a trianlge is that the sum of \n  any two sides of a trianlge is equal to or greater than \n the third side" <<endl;
	if(a+b>=c)
    {  if(b+c>=a)
	        if(a+c>=b)
              cout<<"these three sides conform triangle" <<endl;
              else
              cout<<"this cannot form a triangle" <<endl;
  } 
  system("pause") ;
}
