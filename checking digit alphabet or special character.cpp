#include<iostream>
using namespace std;
int main()
{
	char character,i,j,k,f;
	cout<<"enter any character(alphabat,digit,special_character)" <<endl;
	cin>>character;
	for(i=97;i<=122;i++)
	{
		if(character==i)
		cout<<"its lower case alphabat" <<endl;
	}
	for(j=65;j<=90;j++)
	{
		if(character==j)
		cout<<"its upper case alphabet"<<endl;
	}
	for(k=48;k<=57;k++)
	{
		if(character==k)
		cout<<"its a digit" <<endl;
	}
	for(f=32;f<=47;f++)
	{
		if(character==f)
		cout<<"its a special character" <<endl;
	}
	system("pause");
}
