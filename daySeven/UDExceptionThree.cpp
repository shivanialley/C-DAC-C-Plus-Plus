//--------------------------------------------------------------------------------------
//Institute : CDAC Bangalore
//--------------------------------------------------------------------------------------
//Abstract : Exception scenerio with constructor & destructor with pointer of class
//--------------------------------------------------------------------------------------
//Author : Shivani Garg
//--------------------------------------------------------------------------------------
#include<iostream>

using namespace std;

class MyException
{
	int num;
	string mesg;
	public:
		MyException(int errNo, const char *msg):num(errNo),mesg(msg)
		{
			cout<<"Constructor called"<<endl;
		}
		void what()
		{
			cout<<"num: "<<num<<"\tType : "<<mesg<<endl;
		}

		~MyException()
		{
			cout<<"Destructor called..."<<endl;
		}
};

int main()
{
	try
	{
		cout<<"Statement #1"<<endl;
		throw new MyException(404,"Resource NOT available");
		cout<<"Statement #2"<<endl;
	}
	catch(MyException *ePtr)
	{
		ePtr->what();
		delete ePtr;
	}
	cout<<"Statement #3"<<endl;
}
