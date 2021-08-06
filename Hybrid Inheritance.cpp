#include<iostream> //Hybrid inheriatnce
using namespace std;
class student
{
	protected:
		char name[10];
		int prn;
	public:
		void getdata()
		{
			cout<<"\nEnter student prn : ";
			cin>>prn;
			cout<<"Enter student name : ";
			getchar();
			gets(name);	
		}
		void displaydata()
		{
			cout<<"\nPRN : "<<prn;
			cout<<"\nNAME : "<<name;
		}
};
class UT_marks:virtual public student
{
	protected:
		int marks[10];
		int sub;
	public:
		void getmarks()
		{
			cout<<"Enter number of subjects : ";
			cin>>sub;
			cout<<"Enter Marks : \n";
			for(int i=0;i<sub;i++)
			{
				cout<<"Marks of sub "<<i+1<<" : ";
				cin>>marks[i];
			}
		}
		void displaymarks()
		{
			for(int i=0;i<sub;i++)
			{
				cout<<"\nMARKS of sub "<<i+1<<" : "<<marks[i]<<" ";
			}
		}	
};
class sports:virtual public student
{
	protected:
		int score;
	public:
		void getscore()
		{
			cout<<"Enter the score : ";
			cin>>score;
		}
		int displayscore()
		{
			cout<<"\nSCORE : "<<score<<"\n";
		}
};
class result:public UT_marks,public sports
{
	public:
		int percent;
		int getinfo()
		{
			getdata();
			getmarks();
			getscore();
			return 0;
		}
		int calculate()
		{
			int sum=0;
			for(int i=0;i<sub;i++)
			{
				sum+=marks[i];
			}
			percent=(sum/sub);
			cout<<"\nPERCENTAGE : "<<percent<<" %";
		}
		int show()
		{
			displaydata();
			displaymarks();
			displayscore();
			return 0;
		}
};
int main ()
{
	int n,i;
	result r[10];
	cout<<"oo HYBRID INHERITANCE oo\n";
	cout<<"\nEnter the number of students : ";
	cin>>n;
	cout<<"\n ******* ENTER STUDENT DETAILS *******\n";
	for(i=0;i<n;i++)
	{
		cout<<"\nSTUDENT NO : "<<i+1;
		r[i].getinfo();
		getchar();			
	}
	cout<<"\n*****************************************\n\n";
	cout<<"\n\n******* DISPLAY STUDENT DETAILS *******\n";
	for(i=0;i<n;i++)
	{
		cout<<"\n\nSTUDENT NO : "<<i+1;
		cout<<r[i].show();
		r[i].calculate();
	}
}
