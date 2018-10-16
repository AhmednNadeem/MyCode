#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	int sum;
	sum=0;
	cout<<"Amstrong number between 1 and 500 are  " <<endl;
	for(i=1;i<=500;i++)
	{
		j=i;
		sum=0;
		for(;j>0;j=j/10)
		{
			n=j%10;
		
			sum=sum+n*n*n;
		}
		if(sum==i) 
			cout<<i <<endl;
		
	}
			
		
	
	system("pause");
}
