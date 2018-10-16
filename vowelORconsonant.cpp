#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"enter any alphabat" <<endl;
	cin>>a;
	if(a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I' || a=='o'||a=='O'||a=='u'||a=='U')
	{
		cout<<"Its vowel" <<endl;
	}
	else
	cout<<"its consonant" <<endl;
	system("pause");
}
