#include<iostream>

using namespace std;

class Employee
{
	private: //by default in classes
		const int id; //const
		string name; //normal
		mutable double sal; //mutable
		static int idCounter; //declaration -->static
	public:
		Employee();//function with default argyuments
		Employee(const char *,double);//3 para,eterized constructor(c'tor)
		void acceptDetails();
		void dispDetails()const ;
		void dispDetails();
		static int getIdCounter()
		{
			idCounter++;
			return idCounter;
		}
};

int main()
{
	const Employee a("AAAAD",41344.241); //object is constant here
	a.dispDetails();//can call const member functions only
	
	Employee b;
	b.acceptDetails();
	b.dispDetails();

	Employee c;
	 c.acceptDetails();
        c.dispDetails();
	 c.acceptDetails();
        c.dispDetails();
	 c.acceptDetails();
        c.dispDetails();
}

Employee::Employee():id(Employee::idCounter++)
{
	
}

Employee::Employee( const char *nm,double sl):id(Employee::idCounter++),name(nm),sal(sl)
{

}

void Employee::acceptDetails()
{
	cout<<"Enter Name & Salary for ("<<idCounter-1<<"):";
	cin>>name>>sal;
	getIdCounter();
}

void Employee::dispDetails()const
{
	cout<<"const function ID = "<<id<<"\t Name = "<<name<<" Salary ="<<fixed<<sal<<endl;
	sal += 10000;
        cout<<"Modified const function ID = "<<id<<"\t Name = "<<name<<" Salary ="<<fixed<<sal<<endl;

}

void Employee::dispDetails()
{
        cout<<"Non const function ID = "<<id<<"\t Name = "<<name<<" Salary ="<<fixed<<sal<<endl;
	sal += 10000;
	cout<<"Modified Non const function ID = "<<id<<"\t Name = "<<name<<" Salary ="<<fixed<<sal<<endl;
}

int Employee::idCounter = 1001; //definition 
