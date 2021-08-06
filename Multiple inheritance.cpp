#include<iostream> //multiple inheritance
using namespace std;
class item
{
	char title[15];
	int price;
	public:
		void getdata()
		{
			cout<<"\nEnter part name : ";
			getchar();
			gets(title);
			cout<<"Enter price : ";
			cin>>price;
		}
		void displaydata()
		{
			cout<<"\n\nTITLE : "<<title<<"\nPRICE : "<<price;
		}
};
class sales
{
	float s[3];
	public:
		void getdata()
		{
			cout<<"Enter the the sales amount for 3 months : \n";
			for(int i=0;i<3;i++)
			{
				cout<<"Sales for month "<<i+1<<" : ";
				cin>>s[i];
			}
		}
		void displaydata()
		{
			for(int i=0;i<3;i++)
			{
				cout<<"\nSALES FOR MONTH "<<i+1<<" : "<<s[i];
			}
		}
};
class hwitem:public item,public sales
{
	char category[15];
	char manf[15];
	public:
		void getdata()
		{
			item::getdata();
			cout<<"Enter the category : ";
			getchar();
			gets(category);
			cout<<"Enter manufacturer : ";
			gets(manf);
			sales::getdata();
		}
		void displaydata()
		{
			item::displaydata();
			cout<<"\nCATEGORY : "<<category;
			cout<<"\nMANUFACTURER : "<<manf;
			sales::displaydata();
		}
};
class switem:public item,public sales
{
	char os[15];
	char category[15];
	public:
		void getdata()
		{
			item::getdata();
			getchar();
			cout<<"Enter the category : ";
			gets(category);
			cout<<"Enter Operating System : ";
			gets(os);
			sales::getdata();
		}
		void displaydata()
		{
			item::displaydata();
			cout<<"\nCATEGORY : "<<category;
			cout<<"\nOPERATING SYSTEM : "<<os;
			sales::displaydata();
		}
};
int main()
{
	hwitem h[10];
    switem s[10];
    int n;
    cout<<"oo MULTIPLE INHERITANCE oo\n";	
    cout<<"\n ********* Hardware Item ********\n"<<endl;
    cout<<"Enter the number of hardware items : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cout<<"\nItem No: "<<i+1<<"\n";
    	h[i].getdata();
	}
    cout<<"\n ********* Software Item ********\n"<<endl;
    cout<<"Enter the number of software items : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cout<<"\nItem No: "<<i+1<<"\n";
    	s[i].getdata();
	}
    cout<<"\n\n*******DISPLAY DETAILS*******\n\n";
    cout<<"\n ********* Hardware Item ********"<<endl;
    for(int i=0;i<n;i++)
    {
    	cout<<"\n\nItem No: "<<i+1<<"\n";
    	h[i].displaydata();
	}
    cout<<"\n\n ********* Software Item ********\n"<<endl;
    for(int i=0;i<n;i++)
    {	
    	cout<<"\n\nItem No: "<<i+1<<"\n";
    	s[i].displaydata();
	}
    return 0;
}
