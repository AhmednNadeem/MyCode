#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
    char alphabet;
	cout<<"enter a character"<<endl;
	cin>> alphabet;
	(alphabet>= 65 && alphabet<=96 ? cout<<"its in upper case": cout<<"its not an uppercase"<<endl);
	system("pause");
}
