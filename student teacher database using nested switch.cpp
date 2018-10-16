#include<iostream>
#include<string>
using namespace std;
int main()
{
	char i;
	int j,k,m,batch,age;
	string name,roll_no,subject,qualification;
	char section;
	for(i='y';i=='y';)
	{
		
		cout<<"enter 1 for manipulating student record and 2 for manipulating teacher record" <<endl;
		cin>>j;
		switch(j)
		{
			case 1:
			    cout<<"enter 1 for adding new record and 2 for displaying record of student" <<endl;
			    cin>>k;
			    switch(k)
		       	{
		       		case 1:
		       			cout<<"Adding record" <<endl;
		       			cout<<"enter student name" <<endl;
		       			cin>>name;
		       			cout<<"enter student roll number" <<endl;
		       			cin>>roll_no;
		       			cout<<"enter student section" <<endl;
		       			cin>>section;
		       			cout<<"enter student's batch" <<endl;
		       			cin>>batch;
		       			break;
		       		case 2:
		       			cout<<"displaying record of student" <<endl;
		       			cout<<"NAME: Ahmed Nadeem" <<endl;
		       			cout<<"ROLL NO: 18F-0411" <<endl;
		       			cout<<"SECTION: F" <<endl;
		       			cout<<"BATCH: 18" <<endl;
		       			break;
		       		default:
		       			cout<<"go back to main menu" <<endl;
		        }
            break; 		       
				   
			case 2:
				cout<<"enter 1 for adding record of teacher and 2 for displaying record of teacher" <<endl;
				cin>>m;
				switch(m)
				{
					case 1:
						cout<<"Adding record of teacher" <<endl;
						cout<<"enter teacher name" <<endl;
						cin>>name;
						cout<<"enter teacher subject" <<endl;
						cin>>subject;
						cout<<"enter teacher's qualification" <<endl;
						cin>>qualification;
						cout<<"enter teacher age" <<endl;
						cin>>age;
						break;
					case 2:
						cout<<"displaying record of teacher" <<endl;
						cout<<"NAME: Athar rafiq" <<endl;
						cout<<"SUBJECT: Physics" <<endl;
						cout<<"QUALIFICATION: MPhill Physics" <<endl;
						cout<<"AGE: 32" <<endl;
						break;
					default:
						cout<<"go back to main menu" <<endl;
			    }
			break;			
				
			      
		}
			cout<<"enter value of i(enter any character except y to terminate record manipulation)" <<endl;
		cin>>i;
	}
	system("pause");
}
