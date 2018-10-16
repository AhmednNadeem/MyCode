#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,largest,min;
	cout<<"enter value of 5 integers" <<endl;
	cin>>a>>b>>c>>d>>e;
	largest =a;
	if(b>largest)
	largest =b;
	else if(c>largest)
	largest=c;
	else if(d>largest)
	largest =d;
	else if(e>largest) 
	largest=e;
	else
	cout<<" " <<endl;
	cout<<"largest number is" <<" " <<largest <<endl;
	min=a;
	if(b<min)
	min=b;
	else if(c<min)
	min=c;
	else if(d<min)
	min=d;
	else if(e<min)
	min=e;
	else
	cout<<" "<<endl;
	cout<<"minimum number is" <<" " <<min <<endl;
	system("pause");
}
