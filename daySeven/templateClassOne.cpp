//-------------------------------------------------------------------------
//Institute : CDAC Bangalore
//-------------------------------------------------------------------------
//Abstract : template using different class object
//-------------------------------------------------------------------------
//Author : Shivani Garg
//-------------------------------------------------------------------------

#include<iostream>

using namespace std;

template<typename T>
class Test
{
	T data;
	public:
		Test(T arg=T()):data(arg){}
		void disp()
		{
			cout<<"Data: "<<data<<endl;
		}
};

int main()
{
	Test<int> obj(100);
	Test<double> dobj(1324.143);
	Test<const char *> pcobj("whatever you want");

	obj.disp();
	dobj.disp();
	pcobj.disp();
}
