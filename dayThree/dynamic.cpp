#include<iostream>
//#include<memory>
/*
#ifndef Size
#define Size 20
#endif
*/
using namespace std;

class Array
{
	int *arr;
//	int size;
	public:
		Array();
		~Array();
		void print();
};

int main()
{
	Array a;
	a.print();
}

Array::Array()
{
//	int n = 26;
	arr = new int[25];
	for (int i = 0; i <15; i++)
	{
		arr[i] = 1001 + i;
	}
}
Array::~Array()
{
	delete[]arr;
}

void Array::print()
{
	cout<<"Arary....";
	for (int i =0;i<15;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n";
}
