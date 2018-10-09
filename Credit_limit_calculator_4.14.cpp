#include<iostream>
using namespace std;
int main()
{
	int a_n,current_balance,item_charged,credits,credit_limit,new_balance;
	cout<<"enter account number" <<endl;
	cin>> a_n;
	cout<<"enter the current balance at beggining" <<endl;
	cin>>current_balance;
	cout<<"enter all items charged by this customer" <<endl;
	cin>>item_charged;
	cout<<"enter total credit applied to customer" <<endl;
	cin>>credits;
	cout<<"enter allowed credit limit" <<endl;
	cin>>credit_limit;
	new_balance= current_balance+item_charged-credits;
	cout<<"your new balance is" <<" " <<new_balance <<endl;
	cout<<"account number :" <<" " <<a_n <<endl;
	cout<<"credit limit: " <<" " <<credit_limit <<endl;
	cout<<"your new balance:" <<" " <<new_balance <<endl;
	if(new_balance >credit_limit)
	cout<<"your credit limit is exceeded!" <<endl;
	system("pause");
}
