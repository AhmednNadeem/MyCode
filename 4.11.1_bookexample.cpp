#include<iostream>
using namespace std;
int main()
{
	int i,result,pass,fail;
	pass=0, fail=0;
	for(i=0;i<=9;i++)
	{
		cout<<"enter result of student" <<endl;
		cin>> result;
		if(result ==1)
		pass++;
		if(result==2)
		fail++;
		
	}
	cout<<"summary of test result of ten students" <<endl;
	cout<<"passing students are" <<" " <<pass <<endl;
	cout<<"failing students are" <<" " <<fail <<endl;
	if(pass>=8)
	cout<<"Nice Job! bonus for instructor";
	system("pause");
}
