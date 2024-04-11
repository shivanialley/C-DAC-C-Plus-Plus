//-------------------------------------------------------------------------
//Institute : CDAC Bangalore
//-------------------------------------------------------------------------
//Abstract : Exception scenerio with Base class OurException
//-------------------------------------------------------------------------
//Author : Shivani Garg
//-------------------------------------------------------------------------
#include<iostream>
#include<exception>
using namespace std;

class OurException
{
	public:
		virtual void what(){}
};

class YourException:public OurException
{
        int num;
        public:
                YourException(int errNo):num(errNo)
                {
                }
                void what()
                {
                        cout<<"num: "<<num<<endl;
                }
};

class MyException:public OurException
{
	int num;
	string mesg;
	public:
		MyException(int errNo,const char *msg):num(errNo),mesg(msg)
		{
		}
		void what()
		{
			cout<<"num: "<<num<<"Type: "<<mesg<<endl;
		}
};

int main()
{
	try
	{
		cout<<"Statement #1"<<endl;
		//throw MyException(404,"Resource NOT available");
		//throw YourException(404);
		throw OurException();
		cout<<"Statement #2"<<endl;
	}
	 catch(OurException &eobj)
        {
                eobj.what();
        }
	cout<<"Statement #3"<<endl;
}
