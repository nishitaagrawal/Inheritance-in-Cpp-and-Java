#include<iostream>   //Multilevel inheritance
using namespace std;
class student
{
	int prn;
	char name[10];
	public:
		int getdata()
		{
			cout<<"\nEnter student PRN : ";
			cin>>prn;
			cout<<"Enter student NAME : ";
			getchar();
			gets(name);
			return 0;
		}
		void display()
		{
			cout<<"\nPRN : "<<prn<<"\nNAME : "<<name<<"\n";
		}
};
class marks:public student
{
	public:
		int sub,marks[10];
		int get_data()
		{
			getdata();
			cout<<"Enter the number of subjects : ";
			cin>>sub;
			for(int i=0;i<sub;i++)
			{
				cout<<"Marks of sub "<<i+1<<" : ";
				cin>>marks[i];
			}
			return 0;
		}
		int displaydata()
		{
			display();
			for(int i=0;i<sub;i++)
			{
				cout<<"MARKS of subject "<<i+1<<" : "<<marks[i]<<endl;
			}
			return 0;
		}
};
class result:public marks
{
	public:
		float percent;
		int calculate()
		{
			int sum=0;
			for(int i=0;i<sub;i++)
			{
				sum+=marks[i];
			}
			percent=(sum/sub);
			cout<<"\nPERCENTAGE : "<<percent<<" %";
			return 0;
		}
};
int main()
{
	int n,i;
	result r[10];
	cout<<"oo MULTILEVEL INHERITANCE oo \n\n";
	cout<<"Enter the number of students : ";
	cin>>n;
	cout<<"\n******* ENTER STUDENT DETAILS : ********\n";
	for(i=0;i<n;i++)
	{
		cout<<"\nSTUDENT NO : "<<i+1;
		r[i].get_data();			
	}
	cout<<"\n\n****** DISPLAY STUDENT DETAILS ******\n";
	for(i=0;i<n;i++)
	{
		cout<<"\n\nSTUDENT NO : "<<i+1;
		cout<<r[i].displaydata();
		r[i].calculate();
	}
	return 0;
}
