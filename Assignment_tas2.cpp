#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num, num2,factorial,num3,counter,p,num4,a;
factorial = 1;
a = 1;


	cout<<"menu is: "<<endl;
	cout<<"1:factorial \n2:prime number \n3:even/odd \n4:Exit"<<endl;
	cout<<"enter the program number you want to execute from the list"<<endl;
	cin>> num;
	if(num == 1)
	  { cout<<"enter the number for factorial"<<endl;
	  cin >> num2;
	  while(a<=num2)
	    { factorial = factorial *a;
	    a++;
		}
		cout<<"factorial is" <<" " <<factorial <<endl;
      }
    else if(num == 2)
     { cout<<"enter a number to check" <<endl;
       cin>> num3;
       p=1;
       counter = 2;
       while(counter<num3)
         {
		   counter ++;
		   if(num3 % counter == 0)
		     {
			   p= 0;
		      break;
		     } 
		     if(p== 1)
		     cout<<"its  a prime number"<<endl;
		     else
		     cout<<"its not a prime number"<<endl;
         }  
	} 
    else if(num == 3)    
    { cout<< "enter a number to check even or odd"<<endl;
      cin>> num4;
      if(num4%2==0)
       cout<<"its a even number" <<endl;
      else
       cout<<"its an odd number"<<endl;
	}
	
	else if(num == 4)
	    cout<<"exit from menu"<<endl;
	    
	else
	   cout<<"your program is not in our menu list"<<endl;
	 
	 system("pause");  
	       
	  
		 
       }
