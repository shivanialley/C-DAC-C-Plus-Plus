#include<iostream>

using namespace std;

int main()
{
	cout<<"Statement #1"<<endl;
	try
	{
		cout<<"Statement #2"<<endl;
		throw 10.32423;
		cout<<"Statement #3"<<endl;
	}
	catch(int)
	{
		cout<<"caught int type"<<endl;
	}
	 catch(float)
        {
                cout<<"caught int type"<<endl;
        }
	  catch(...)
        {
                cout<<"caught unknown type"<<endl;
        }
	cout<<"Statement #4"<<endl;
}
