#include<iostream>  //Hierarchical Inheritance
using namespace std;
class person
{
	char name[10] , desg[10];
	int pno;
	public:
	    void getperson() 
		{
	        cout << "\nEnter the Person number : ";
	        cin>>pno;
	        cout << "Enter the Person name : ";
	        cin>>name;
	        cout << "Enter the Person designation : ";
	        cin>>desg;
	    }
	    void person_display() 
		{
	    	cout <<"\nPERSON NUMBER : "<<pno;
			cout <<"\nPERSON NAME : "<<name;
			cout <<"\nPERSON DESIGNATION : "<<desg;
	    }
};
class employee:public person
{
	float bp, hra, da, pf, np;
	public:
		int getemp()
		{
	    	getperson();
	        cout << "Enter the Basic pay : ";
	        cin>>bp;
	        cout << "Enter the Humen Resource Allowance : ";
	        cin>>hra;
	        cout << "Enter the Dearness Allowance : ";
	        cin>>da;
	        cout << "Enter the Profitablity Fund : ";
	        cin>>pf;
	        calculate();
	    }
	    void calculate()
		{
	        np = bp + hra + da - pf;
	    }
	    int employee_display()
		{
	    	person_display();
	    	cout <<"\nEmployee BASIC PAY : "<<bp;
			cout <<"\nEmployee HUMAN RESOURCE ALLOWANCE : "<<hra;
			cout <<"\nEmployee DEARNESS ALLOWANCE : "<<da;
			cout <<"\nEmployee PROFITABLITY FUND : "<<pf;
			cout <<"\nEmployee NET PAY : "<<np;
	    }
};
class student:public person
{
	char name[10];
	int prn;
	char branch[10];
	public:
		void getstudentdetails()
		{
			getperson();
			cout<<"Enter student prn : ";
			cin>>prn;
			cout<<"Enter student name : ";
			getchar();
			gets(name);	
			cout<<"Enter branch : ";
			cin>>branch;
		}
		void studentdisplay()
		{
			person_display();
			cout<<"\nPRN : "<<prn;
			cout<<"\nNAME : "<<name;
			cout<<"\nBRANCH : "<<branch;
		}
};
int main()
{
	int i, n;
    char ch;
    student s[10];
    employee e[10];
    cout<<"oo HIERARCHICAL INHERITANCE oo\n\n";
	cout << "Enter the number of Students :";
    cin>>n;
    cout<<"\n####### ENTER STUDENT DETAILS #######\n";
    for(i=0;i<n;i++)
	{
    	cout << "\nSTUDENT NUMBER : "<<(i+1);
        s[i].getstudentdetails();
	}
	cout<<"\n####### DISPLAY DETAILS ######## \n";
    cout<<"\n\n***** STUDENT DETAILS *****\n";
    for (i = 0; i < n; i++) 
	{
		cout << "\nSTUDENT NUMBER : "<<(i+1)<<"\n";
        s[i].studentdisplay();
        cout<<"\n";
    }
    cout<<"\n****************************\n";
	cout<<"\n####### ENTER EMPLOYEE DETAILS #######\n";
    cout << "\n\nEnter the number of Employees :";
    cin>>n;
    for(i=0;i<n;i++)
	{
    	cout<<"\n\nEMPLOYEE NUMBER : "<<(i+1);
        e[i].getemp();
    }
	cout<<"\n####### DISPLAY DETAILS ######## \n";
    cout<<"***** EMPLOYEE DETAILS *****";
    for(i=0;i<n;i++)
	{
		cout<<"\n\nEMPLOYEE NUMBER : "<<(i+1)<<"\n";
		e[i].employee_display();
		cout<<"\n";
    }
    cout<<"\n****************************";
    return 0;
}
